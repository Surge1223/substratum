cmd_/data/toolchain/include/include/linux/wimax/.install := /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/wimax /data/linux-3.10.87/include/uapi/linux/wimax i2400m.h; /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/wimax /data/linux-3.10.87/include/linux/wimax ; /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/wimax /data/linux-3.10.87/include/generated/uapi/linux/wimax ; for F in ; do echo "\#include <asm-generic/$$F>" > /data/toolchain/include/include/linux/wimax/$$F; done; touch /data/toolchain/include/include/linux/wimax/.install