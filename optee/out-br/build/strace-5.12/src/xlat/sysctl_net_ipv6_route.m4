dnl Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_net_ipv6_route.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_sysctl_net_ipv6_route],[
AC_CHECK_DECLS(m4_normalize([
NET_IPV6_ROUTE_FLUSH,
NET_IPV6_ROUTE_GC_THRESH,
NET_IPV6_ROUTE_MAX_SIZE,
NET_IPV6_ROUTE_GC_MIN_INTERVAL,
NET_IPV6_ROUTE_GC_TIMEOUT,
NET_IPV6_ROUTE_GC_INTERVAL,
NET_IPV6_ROUTE_GC_ELASTICITY,
NET_IPV6_ROUTE_MTU_EXPIRES,
NET_IPV6_ROUTE_MIN_ADVMSS,
NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS
]),,, [
#include <sys/types.h>
#include <linux/sysctl.h>
])])])
