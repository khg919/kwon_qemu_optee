dnl Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_kern.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_sysctl_kern],[
AC_CHECK_DECLS(m4_normalize([
KERN_OSTYPE,
KERN_OSRELEASE,
KERN_OSREV,
KERN_VERSION,
KERN_SECUREMASK,
KERN_PROF,
KERN_NODENAME,
KERN_DOMAINNAME,
KERN_PANIC,
KERN_REALROOTDEV,
KERN_SPARC_REBOOT,
KERN_CTLALTDEL,
KERN_PRINTK,
KERN_NAMETRANS,
KERN_PPC_HTABRECLAIM,
KERN_PPC_ZEROPAGED,
KERN_PPC_POWERSAVE_NAP,
KERN_MODPROBE,
KERN_SG_BIG_BUFF,
KERN_ACCT,
KERN_PPC_L2CR,
KERN_RTSIGNR,
KERN_RTSIGMAX,
KERN_SHMMAX,
KERN_MSGMAX,
KERN_MSGMNB,
KERN_MSGPOOL,
KERN_SYSRQ,
KERN_MAX_THREADS,
KERN_RANDOM,
KERN_SHMALL,
KERN_MSGMNI,
KERN_SEM,
KERN_SPARC_STOP_A,
KERN_SHMMNI,
KERN_OVERFLOWUID,
KERN_OVERFLOWGID,
KERN_SHMPATH,
KERN_HOTPLUG,
KERN_IEEE_EMULATION_WARNINGS,
KERN_S390_USER_DEBUG_LOGGING,
KERN_CORE_USES_PID,
KERN_TAINTED,
KERN_CADPID,
KERN_PIDMAX,
KERN_CORE_PATTERN,
KERN_PANIC_ON_OOPS,
KERN_HPPA_PWRSW,
KERN_HPPA_UNALIGNED,
KERN_PRINTK_RATELIMIT,
KERN_PRINTK_RATELIMIT_BURST,
KERN_PTY,
KERN_NGROUPS_MAX,
KERN_SPARC_SCONS_PWROFF,
KERN_HZ_TIMER,
KERN_UNKNOWN_NMI_PANIC,
KERN_BOOTLOADER_TYPE,
KERN_RANDOMIZE,
KERN_SETUID_DUMPABLE,
KERN_SPIN_RETRY,
KERN_ACPI_VIDEO_FLAGS,
KERN_IA64_UNALIGNED,
KERN_COMPAT_LOG,
KERN_MAX_LOCK_DEPTH,
KERN_NMI_WATCHDOG,
KERN_PANIC_ON_NMI,
KERN_PANIC_ON_WARN,
KERN_PANIC_PRINT
]),,, [
#include <sys/types.h>
#include <linux/sysctl.h>
])])])
