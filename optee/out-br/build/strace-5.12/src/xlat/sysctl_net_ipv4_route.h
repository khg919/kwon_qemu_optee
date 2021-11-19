/* Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_net_ipv4_route.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net_ipv4_route in mpers mode

# else

static const struct xlat_data sysctl_net_ipv4_route_xdata[] = {
 XLAT(NET_IPV4_ROUTE_FLUSH),
 #define XLAT_VAL_0 ((unsigned) (NET_IPV4_ROUTE_FLUSH))
 #define XLAT_STR_0 STRINGIFY(NET_IPV4_ROUTE_FLUSH)
 XLAT(NET_IPV4_ROUTE_MIN_DELAY),
 #define XLAT_VAL_1 ((unsigned) (NET_IPV4_ROUTE_MIN_DELAY))
 #define XLAT_STR_1 STRINGIFY(NET_IPV4_ROUTE_MIN_DELAY)
 XLAT(NET_IPV4_ROUTE_MAX_DELAY),
 #define XLAT_VAL_2 ((unsigned) (NET_IPV4_ROUTE_MAX_DELAY))
 #define XLAT_STR_2 STRINGIFY(NET_IPV4_ROUTE_MAX_DELAY)
 XLAT(NET_IPV4_ROUTE_GC_THRESH),
 #define XLAT_VAL_3 ((unsigned) (NET_IPV4_ROUTE_GC_THRESH))
 #define XLAT_STR_3 STRINGIFY(NET_IPV4_ROUTE_GC_THRESH)
 XLAT(NET_IPV4_ROUTE_MAX_SIZE),
 #define XLAT_VAL_4 ((unsigned) (NET_IPV4_ROUTE_MAX_SIZE))
 #define XLAT_STR_4 STRINGIFY(NET_IPV4_ROUTE_MAX_SIZE)
 XLAT(NET_IPV4_ROUTE_GC_MIN_INTERVAL),
 #define XLAT_VAL_5 ((unsigned) (NET_IPV4_ROUTE_GC_MIN_INTERVAL))
 #define XLAT_STR_5 STRINGIFY(NET_IPV4_ROUTE_GC_MIN_INTERVAL)
 XLAT(NET_IPV4_ROUTE_GC_TIMEOUT),
 #define XLAT_VAL_6 ((unsigned) (NET_IPV4_ROUTE_GC_TIMEOUT))
 #define XLAT_STR_6 STRINGIFY(NET_IPV4_ROUTE_GC_TIMEOUT)
 XLAT(NET_IPV4_ROUTE_GC_INTERVAL),
 #define XLAT_VAL_7 ((unsigned) (NET_IPV4_ROUTE_GC_INTERVAL))
 #define XLAT_STR_7 STRINGIFY(NET_IPV4_ROUTE_GC_INTERVAL)
 XLAT(NET_IPV4_ROUTE_REDIRECT_LOAD),
 #define XLAT_VAL_8 ((unsigned) (NET_IPV4_ROUTE_REDIRECT_LOAD))
 #define XLAT_STR_8 STRINGIFY(NET_IPV4_ROUTE_REDIRECT_LOAD)
 XLAT(NET_IPV4_ROUTE_REDIRECT_NUMBER),
 #define XLAT_VAL_9 ((unsigned) (NET_IPV4_ROUTE_REDIRECT_NUMBER))
 #define XLAT_STR_9 STRINGIFY(NET_IPV4_ROUTE_REDIRECT_NUMBER)
 XLAT(NET_IPV4_ROUTE_REDIRECT_SILENCE),
 #define XLAT_VAL_10 ((unsigned) (NET_IPV4_ROUTE_REDIRECT_SILENCE))
 #define XLAT_STR_10 STRINGIFY(NET_IPV4_ROUTE_REDIRECT_SILENCE)
 XLAT(NET_IPV4_ROUTE_ERROR_COST),
 #define XLAT_VAL_11 ((unsigned) (NET_IPV4_ROUTE_ERROR_COST))
 #define XLAT_STR_11 STRINGIFY(NET_IPV4_ROUTE_ERROR_COST)
 XLAT(NET_IPV4_ROUTE_ERROR_BURST),
 #define XLAT_VAL_12 ((unsigned) (NET_IPV4_ROUTE_ERROR_BURST))
 #define XLAT_STR_12 STRINGIFY(NET_IPV4_ROUTE_ERROR_BURST)
 XLAT(NET_IPV4_ROUTE_GC_ELASTICITY),
 #define XLAT_VAL_13 ((unsigned) (NET_IPV4_ROUTE_GC_ELASTICITY))
 #define XLAT_STR_13 STRINGIFY(NET_IPV4_ROUTE_GC_ELASTICITY)
 XLAT(NET_IPV4_ROUTE_MTU_EXPIRES),
 #define XLAT_VAL_14 ((unsigned) (NET_IPV4_ROUTE_MTU_EXPIRES))
 #define XLAT_STR_14 STRINGIFY(NET_IPV4_ROUTE_MTU_EXPIRES)
 XLAT(NET_IPV4_ROUTE_MIN_PMTU),
 #define XLAT_VAL_15 ((unsigned) (NET_IPV4_ROUTE_MIN_PMTU))
 #define XLAT_STR_15 STRINGIFY(NET_IPV4_ROUTE_MIN_PMTU)
 XLAT(NET_IPV4_ROUTE_MIN_ADVMSS),
 #define XLAT_VAL_16 ((unsigned) (NET_IPV4_ROUTE_MIN_ADVMSS))
 #define XLAT_STR_16 STRINGIFY(NET_IPV4_ROUTE_MIN_ADVMSS)
 XLAT(NET_IPV4_ROUTE_SECRET_INTERVAL),
 #define XLAT_VAL_17 ((unsigned) (NET_IPV4_ROUTE_SECRET_INTERVAL))
 #define XLAT_STR_17 STRINGIFY(NET_IPV4_ROUTE_SECRET_INTERVAL)
#if defined(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS) || (defined(HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS) && HAVE_DECL_NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS)
  XLAT(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS),
 #define XLAT_VAL_18 ((unsigned) (NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS))
 #define XLAT_STR_18 STRINGIFY(NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS)
#endif
};
static
const struct xlat sysctl_net_ipv4_route[1] = { {
 .data = sysctl_net_ipv4_route_xdata,
 .size = ARRAY_SIZE(sysctl_net_ipv4_route_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
