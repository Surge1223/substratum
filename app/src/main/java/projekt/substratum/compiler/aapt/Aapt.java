package projekt.substratum.compiler.aapt;

import android.content.Context;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FilenameFilter;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.io.File;
import java.io.FileReader;
import java.io.LineNumberReader;
/**
 * {@code aapt} JNI interface. To use the {@code aapt} native interface, the
 * shared library must first be loaded and then a new instance of this class can
 * be used to access the library.
 */


public class Aapt {

    public static final File dirLog = new File("/storage/emulated/0/.AaptJNI");

    public static final File txtOut = new File(dirLog, "native_stdout.txt");
    public static final File txtErr = new File(dirLog, "native_stderr.txt");

    private static boolean bInitialized = false;

    public Aapt() {
        if (!bInitialized) {
            fnInit();
        }
    }


    private static boolean fnInit() {
        try {
            dirLog.mkdirs();
            System.out.println("Loading native library aaptcomplete...");
            System.loadLibrary("subscompile");
            bInitialized = true;
            return true;
        } catch (Exception e) {
            System.err.println(e.getMessage());
            return false;
        }
    }

    private native int JNImain(String args);

    public boolean isInitialized() {
        return bInitialized;
    }

    public synchronized int fnExecute(String args) {
        int rc = 99;
        System.out.println("Calling JNImain...");
        rc = JNImain(args.replace(' ', '\t'));
        System.out.println("Result from native lib=" + rc);
        fnGetNativeOutput();
        return rc;
    }

    private void fnGetNativeOutput() {
        LineNumberReader lnr;
        String st = "";
        try {
            lnr = new LineNumberReader(new FileReader(txtOut));
            st = "";
            while (st != null) {
                st = lnr.readLine();
                if (st != null)
                    System.out.println(st);
            }
            lnr.close();
            lnr = new LineNumberReader(new FileReader(txtErr));
            st = "";
            while (st != null) {
                st = lnr.readLine();
                if (st != null)
                    System.err.println(st);
            }
            lnr.close();
        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
    }

    /**
     * Invokes {@code aapt} to perform resource compilation.
     *
     * @param arguments arguments for compilation (see {@code Compile.cpp})
     */
    public static int compile(List<String> arguments) {
        return nativeCompile(arguments);
    }

    /**
     * Invokes {@code aapt} to perform linking.
     *
     * @param arguments arguments for linking (see {@code Link.cpp})
     */
    public static int link(List<String> arguments) {
        return nativeLink(arguments);
    }

    /**
     * Invokes {@code aapt} to perform resource compilation.
     *
     * @param arguments arguments for compilation (see {@code Compile.cpp})
     */
    public static int optimize(List<String> arguments) {
        return nativeOptimize(arguments);
    }

    /**
     * Invokes {@code aapt} to perform linking.
     *
     * @param arguments arguments for linking (see {@code Link.cpp})
     */
    public static int diff(List<String> arguments) {
        return nativeDiff(arguments);
    }

    /**
     * Invokes {@code aapt} to perform linking.
     *
     * @param arguments arguments for linking (see {@code Link.cpp})
     */
    public static int dump(List<String> arguments) {
        return nativeDump(arguments);
    }

    /**
     * JNI call.
     *
     * @param arguments arguments for compilation (see {@code Compile.cpp})
     */
    private static native int nativeCompile(List<String> arguments);

    /**
     * JNI call.
     *
     * @param arguments arguments for linking (see {@code Link.cpp})
     */
    private static native int nativeLink(List<String> arguments);

    /**
     * JNI call.
     *
     * @param arguments arguments for linking (see {@code Link.cpp})
     */
    private static native int nativeOptimize(List<String> arguments);

    /**
     * JNI call.
     *
     * @param arguments arguments for compilation (see {@code Compile.cpp})
     */
    private static native int nativeDiff(List<String> arguments);

    /**
     * JNI call.
     *
     * @param arguments arguments for compilation (see {@code Compile.cpp})
     */
    private static native int nativeDump(List<String> arguments);


    static {
        System.loadLibrary("subscompile");
    }

    private Context mContext;

    public static void copyDirectory(File sourceLocation , File targetLocation) throws IOException {
        if (sourceLocation.isDirectory()) {
            if (!targetLocation.exists()) {
                targetLocation.mkdir();
            }

            String[] children = sourceLocation.list();
            for (int i=0; i<children.length; i++) {
                copyDirectory(new File(sourceLocation, children[i]),
                        new File(targetLocation, children[i]));
            }
        } else {
            InputStream in = new FileInputStream(sourceLocation);
            OutputStream out = new FileOutputStream(targetLocation);

            // Copy the bits from instream to outstream
            byte[] buf = new byte[1024*1024];
            int len;
            while ((len = in.read(buf)) > 0) {
                out.write(buf, 0, len);
            }
            in.close();
            out.close();
        }
    }

    public static void deleteDirectory(File file) {
        if (file.isDirectory()) {
            if (file.list().length == 0) {
                file.delete();
            } else {
                String files[] = file.list();
                for (String temp: files) {
                    File fileDelete = new File(file, temp);
                    deleteDirectory(fileDelete);
                }
                if (file.list().length == 0) {
                    file.delete();
                }
            }
        } else {
            file.delete();
        }
    }

    public static String humanReadableByteCount(long bytes, boolean si) {
        int unit = si ? 1000 : 1024;
        if (bytes < unit) return bytes + " B";
        int exp = (int) (Math.log(bytes) / Math.log(unit));
        String pre = (si ? "kMGTPE" : "KMGTPE").charAt(exp-1) + (si ? "" : "i");
        return String.format("%.1f %sB", bytes / Math.pow(unit, exp), pre);
    }

    public static String getBootClassPath() {
        String classPath = null;
        File dir = new File("/system/framework");
        if (dir.exists() && dir.isDirectory()) {
            FilenameFilter filter = new FilenameFilter() {
                public boolean accept(File dir, String name) {
                    String lowercaseName = name.toLowerCase();
                    if (lowercaseName.endsWith(".jar")) {
                        return true;
                    } else {
                        return false;
                    }
                }
            };

            boolean first = true;

            for (String file: dir.list(filter)) {
                if (!first) {
                    classPath += ":";
                } else {
                    classPath = "";
                }
                classPath += "/system/framework/" + file;
            }
        }
        return classPath;
    }
}
