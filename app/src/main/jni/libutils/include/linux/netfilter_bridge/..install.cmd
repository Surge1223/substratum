cmd_/data/toolchain/include/include/linux/netfilter_bridge/.install := /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/netfilter_bridge /data/linux-3.10.87/include/uapi/linux/netfilter_bridge ebt_802_3.h ebt_among.h ebt_arp.h ebt_arpreply.h ebt_ip.h ebt_ip6.h ebt_limit.h ebt_log.h ebt_mark_m.h ebt_mark_t.h ebt_nat.h ebt_nflog.h ebt_pkttype.h ebt_redirect.h ebt_stp.h ebt_ulog.h ebt_vlan.h ebtables.h; /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/netfilter_bridge /data/linux-3.10.87/include/linux/netfilter_bridge ; /bin/sh scripts/headers_install.sh /data/toolchain/include/include/linux/netfilter_bridge /data/linux-3.10.87/include/generated/uapi/linux/netfilter_bridge ; for F in ; do echo "\#include <asm-generic/$$F>" > /data/toolchain/include/include/linux/netfilter_bridge/$$F; done; touch /data/toolchain/include/include/linux/netfilter_bridge/.install
