cmd_/data/toolchain/include/include/linux/nfsd/.install := /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/nfsd /data/linux-3.10.87/include/uapi/linux/nfsd cld.h debug.h export.h nfsfh.h stats.h; /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/nfsd /data/linux-3.10.87/include/linux/nfsd ; /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/nfsd /data/linux-3.10.87/include/generated/uapi/linux/nfsd ; for F in ; do echo "\#include <asm-generic/$$F>" > /data/toolchain/include/include/linux/nfsd/$$F; done; touch /data/toolchain/include/include/linux/nfsd/.install