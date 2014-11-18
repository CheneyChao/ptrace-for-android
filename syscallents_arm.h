#define MAX_SYSCALL_NUM 379

#define SYSCALL_MAXARGS 6
enum argtype {
    ARG_INT,
    ARG_PTR,
    ARG_STR,
    ARG_SOCK
};

struct syscall_entry {
    const char *name;
    int nargs;
    enum argtype args[SYSCALL_MAXARGS];
};

struct syscall_entry syscalls[] = {
  [0] = {
    .name  = "restart_syscall",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [1] = {
    .name  = "exit",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [2] = {
    .name  = "sync_file_range",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [3] = {
    .name  = "read",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [4] = {
    .name  = "write",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [5] = {
    .name  = "open",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [6] = {
    .name  = "close",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [8] = {
    .name  = "creat",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [9] = {
    .name  = "link",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [10] = {
    .name  = "unlink",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [11] = {
    .name  = "execve",
    .nargs = 3,
    .args  = {ARG_STR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [12] = {
    .name  = "chdir",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [13] = {
    .name  = "time",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [14] = {
    .name  = "mknod",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [15] = {
    .name  = "chmod",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [16] = {
    .name  = "lchown",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [19] = {
    .name  = "lseek",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [20] = {
    .name  = "getpid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [21] = {
    .name  = "mount",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_STR, ARG_INT, ARG_PTR, -1}},
  [22] = {
    .name  = "umount",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [23] = {
    .name  = "setuid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [24] = {
    .name  = "getuid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [25] = {
    .name  = "stime",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [26] = {
    .name  = "ptrace",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [27] = {
    .name  = "alarm",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [29] = {
    .name  = "pause",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [30] = {
    .name  = "utime",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [33] = {
    .name  = "access",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [34] = {
    .name  = "nice",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [36] = {
    .name  = "sync",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [37] = {
    .name  = "kill",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [38] = {
    .name  = "rename",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [39] = {
    .name  = "mkdir",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [40] = {
    .name  = "rmdir",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [41] = {
    .name  = "dup",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [42] = {
    .name  = "pipe",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [43] = {
    .name  = "times",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [45] = {
    .name  = "brk",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [46] = {
    .name  = "setgid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [47] = {
    .name  = "getgid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [49] = {
    .name  = "geteuid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [50] = {
    .name  = "getegid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [51] = {
    .name  = "acct",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [52] = {
    .name  = "umount2",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [54] = {
    .name  = "ioctl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [55] = {
    .name  = "fcntl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [57] = {
    .name  = "setpgid",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [60] = {
    .name  = "umask",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [61] = {
    .name  = "chroot",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [62] = {
    .name  = "ustat",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [63] = {
    .name  = "dup2",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [64] = {
    .name  = "getppid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [65] = {
    .name  = "getpgrp",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [66] = {
    .name  = "setsid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [67] = {
    .name  = "sigaction",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [70] = {
    .name  = "setreuid",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [71] = {
    .name  = "setregid",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [72] = {
    .name  = "sigsuspend",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [73] = {
    .name  = "sigpending",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [74] = {
    .name  = "sethostname",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [75] = {
    .name  = "setrlimit",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [76] = {
    .name  = "getrlimit",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [77] = {
    .name  = "getrusage",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [78] = {
    .name  = "gettimeofday",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [79] = {
    .name  = "settimeofday",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [80] = {
    .name  = "getgroups",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [81] = {
    .name  = "setgroups",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [82] = {
    .name  = "select",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, -1}},
  [83] = {
    .name  = "symlink",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [85] = {
    .name  = "readlink",
    .nargs = 3,
    .args  = {ARG_STR, ARG_STR, ARG_INT, -1, -1, -1}},
  [86] = {
    .name  = "uselib",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [87] = {
    .name  = "swapon",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [88] = {
    .name  = "reboot",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [89] = {
    .name  = "readdir",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [90] = {
    .name  = "mmap",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT}},
  [91] = {
    .name  = "munmap",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [92] = {
    .name  = "truncate",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [93] = {
    .name  = "ftruncate",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [94] = {
    .name  = "fchmod",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [95] = {
    .name  = "fchown",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [96] = {
    .name  = "getpriority",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [97] = {
    .name  = "setpriority",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [99] = {
    .name  = "statfs",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [100] = {
    .name  = "fstatfs",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [102] = {
    .name  = "socketcall",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [103] = {
    .name  = "syslog",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [104] = {
    .name  = "setitimer",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [105] = {
    .name  = "getitimer",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [106] = {
    .name  = "stat",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [107] = {
    .name  = "lstat",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [108] = {
    .name  = "fstat",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [111] = {
    .name  = "vhangup",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [113] = {
    .name  = "syscall",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [114] = {
    .name  = "wait4",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, -1, -1}},
  [115] = {
    .name  = "swapoff",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [116] = {
    .name  = "sysinfo",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [117] = {
    .name  = "ipc",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_PTR, ARG_INT}},
  [118] = {
    .name  = "fsync",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [119] = {
    .name  = "sigreturn",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [120] = {
    .name  = "clone",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [121] = {
    .name  = "setdomainname",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [122] = {
    .name  = "uname",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [124] = {
    .name  = "adjtimex",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [125] = {
    .name  = "mprotect",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [126] = {
    .name  = "sigprocmask",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [128] = {
    .name  = "init_module",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_INT, ARG_STR, -1, -1, -1}},
  [129] = {
    .name  = "delete_module",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [131] = {
    .name  = "quotactl",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_PTR, -1, -1}},
  [132] = {
    .name  = "getpgid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [133] = {
    .name  = "fchdir",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [134] = {
    .name  = "bdflush",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [135] = {
    .name  = "sysfs",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [136] = {
    .name  = "personality",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [138] = {
    .name  = "setfsuid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [139] = {
    .name  = "setfsgid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [140] = {
    .name  = "_llseek",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [141] = {
    .name  = "getdents",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [142] = {
    .name  = "_newselect",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [143] = {
    .name  = "flock",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [144] = {
    .name  = "msync",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [145] = {
    .name  = "readv",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [146] = {
    .name  = "writev",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [147] = {
    .name  = "getsid",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [148] = {
    .name  = "fdatasync",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [149] = {
    .name  = "_sysctl",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [150] = {
    .name  = "mlock",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [151] = {
    .name  = "munlock",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [152] = {
    .name  = "mlockall",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [153] = {
    .name  = "munlockall",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [154] = {
    .name  = "sched_setparam",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [155] = {
    .name  = "sched_getparam",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [156] = {
    .name  = "sched_setscheduler",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [157] = {
    .name  = "sched_getscheduler",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [158] = {
    .name  = "sched_yield",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [159] = {
    .name  = "sched_get_priority_max",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [160] = {
    .name  = "sched_get_priority_min",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [161] = {
    .name  = "sched_rr_get_interval",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [162] = {
    .name  = "nanosleep",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [163] = {
    .name  = "mremap",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [164] = {
    .name  = "setresuid",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [165] = {
    .name  = "getresuid",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [168] = {
    .name  = "poll",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_INT, ARG_INT, -1, -1, -1}},
  [169] = {
    .name  = "nfsservctl",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [170] = {
    .name  = "setresgid",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [171] = {
    .name  = "getresgid",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [172] = {
    .name  = "prctl",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [173] = {
    .name  = "rt_sigreturn",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [174] = {
    .name  = "rt_sigaction",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [175] = {
    .name  = "rt_sigprocmask",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [176] = {
    .name  = "rt_sigpending",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [177] = {
    .name  = "rt_sigtimedwait",
    .nargs = 4,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [178] = {
    .name  = "rt_sigqueueinfo",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [179] = {
    .name  = "rt_sigsuspend",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [180] = {
    .name  = "pread64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [181] = {
    .name  = "pwrite64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [182] = {
    .name  = "chown",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_INT, -1, -1, -1}},
  [183] = {
    .name  = "getcwd",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [184] = {
    .name  = "capget",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [185] = {
    .name  = "capset",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [186] = {
    .name  = "sigaltstack",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_PTR, -1, -1, -1, -1}},
  [187] = {
    .name  = "sendfile",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, -1, -1}},
  [190] = {
    .name  = "vfork",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [191] = {
    .name  = "ugetrlimit",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [192] = {
    .name  = "mmap2",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [193] = {
    .name  = "truncate64",
    .nargs = 2,
    .args  = {ARG_STR, ARG_INT, -1, -1, -1, -1}},
  [194] = {
    .name  = "ftruncate64",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [195] = {
    .name  = "stat64",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [196] = {
    .name  = "lstat64",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [197] = {
    .name  = "fstat64",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [198] = {
    .name  = "lchown32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [199] = {
    .name  = "getuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [200] = {
    .name  = "getgid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [201] = {
    .name  = "geteuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [202] = {
    .name  = "getegid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [203] = {
    .name  = "setreuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [204] = {
    .name  = "setregid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [205] = {
    .name  = "getgroups32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [206] = {
    .name  = "setgroups32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [207] = {
    .name  = "fchown32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [208] = {
    .name  = "setresuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [209] = {
    .name  = "getresuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [210] = {
    .name  = "setresgid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [211] = {
    .name  = "getresgid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [212] = {
    .name  = "chown32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [213] = {
    .name  = "setuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [214] = {
    .name  = "setgid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [215] = {
    .name  = "setfsuid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [216] = {
    .name  = "setfsgid32",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [217] = {
    .name  = "getdents64",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [218] = {
    .name  = "pivot_root",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [219] = {
    .name  = "mincore",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [220] = {
    .name  = "madvise",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [221] = {
    .name  = "fcntl64",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [224] = {
    .name  = "gettid",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [225] = {
    .name  = "readahead",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [226] = {
    .name  = "setxattr",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [227] = {
    .name  = "lsetxattr",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [228] = {
    .name  = "fsetxattr",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [229] = {
    .name  = "getxattr",
    .nargs = 4,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [230] = {
    .name  = "lgetxattr",
    .nargs = 4,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [231] = {
    .name  = "fgetxattr",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [232] = {
    .name  = "listxattr",
    .nargs = 3,
    .args  = {ARG_STR, ARG_STR, ARG_INT, -1, -1, -1}},
  [233] = {
    .name  = "llistxattr",
    .nargs = 3,
    .args  = {ARG_STR, ARG_STR, ARG_INT, -1, -1, -1}},
  [234] = {
    .name  = "flistxattr",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [235] = {
    .name  = "removexattr",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [236] = {
    .name  = "lremovexattr",
    .nargs = 2,
    .args  = {ARG_STR, ARG_STR, -1, -1, -1, -1}},
  [237] = {
    .name  = "fremovexattr",
    .nargs = 2,
    .args  = {ARG_INT, ARG_STR, -1, -1, -1, -1}},
  [238] = {
    .name  = "tkill",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [239] = {
    .name  = "sendfile64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, -1, -1}},
  [240] = {
    .name  = "futex",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, ARG_INT}},
  [241] = {
    .name  = "sched_setaffinity",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [242] = {
    .name  = "sched_getaffinity",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [243] = {
    .name  = "io_setup",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [244] = {
    .name  = "io_destroy",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [245] = {
    .name  = "io_getevents",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1}},
  [246] = {
    .name  = "io_submit",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [247] = {
    .name  = "io_cancel",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [248] = {
    .name  = "exit_group",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [249] = {
    .name  = "lookup_dcookie",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [250] = {
    .name  = "epoll_create",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [251] = {
    .name  = "epoll_ctl",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [252] = {
    .name  = "epoll_wait",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [253] = {
    .name  = "remap_file_pages",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [256] = {
    .name  = "set_tid_address",
    .nargs = 1,
    .args  = {ARG_PTR, -1, -1, -1, -1, -1}},
  [257] = {
    .name  = "timer_create",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [258] = {
    .name  = "timer_settime",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [259] = {
    .name  = "timer_gettime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [260] = {
    .name  = "timer_getoverrun",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [261] = {
    .name  = "timer_delete",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [262] = {
    .name  = "clock_settime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [263] = {
    .name  = "clock_gettime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [264] = {
    .name  = "clock_getres",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [265] = {
    .name  = "clock_nanosleep",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [266] = {
    .name  = "statfs64",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_PTR, -1, -1, -1}},
  [267] = {
    .name  = "fstatfs64",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [268] = {
    .name  = "tgkill",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [269] = {
    .name  = "utimes",
    .nargs = 2,
    .args  = {ARG_STR, ARG_PTR, -1, -1, -1, -1}},
  [270] = {
    .name  = "arm_fadvise64_64",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [271] = {
    .name  = "pciconfig_iobase",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [272] = {
    .name  = "pciconfig_read",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [273] = {
    .name  = "pciconfig_write",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [274] = {
    .name  = "mq_open",
    .nargs = 4,
    .args  = {ARG_STR, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [275] = {
    .name  = "mq_unlink",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [276] = {
    .name  = "mq_timedsend",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, ARG_PTR, -1}},
  [277] = {
    .name  = "mq_timedreceive",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_PTR, ARG_PTR, -1}},
  [278] = {
    .name  = "mq_notify",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [279] = {
    .name  = "mq_getsetattr",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [280] = {
    .name  = "waitid",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, -1}},
  [281] = {
    .name  = "socket",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [282] = {
    .name  = "bind",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [283] = {
    .name  = "connect",
    .nargs = 3,
    .args  = {ARG_SOCK, ARG_PTR, ARG_INT, -1, -1, -1}},
  [284] = {
    .name  = "listen",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [285] = {
    .name  = "accept",
    .nargs = 3,
    .args  = {ARG_SOCK, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [286] = {
    .name  = "getsockname",
    .nargs = 3,
    .args  = {ARG_SOCK, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [287] = {
    .name  = "getpeername",
    .nargs = 3,
    .args  = {ARG_SOCK, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [288] = {
    .name  = "socketpair",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [289] = {
    .name  = "send",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [290] = {
    .name  = "sendto",
    .nargs = 6,
    .args  = {ARG_SOCK, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_INT}},
  [291] = {
    .name  = "recv",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [292] = {
    .name  = "recvfrom",
    .nargs = 6,
    .args  = {ARG_SOCK, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_PTR}},
  [293] = {
    .name  = "shutdown",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [294] = {
    .name  = "setsockopt",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_STR, ARG_INT, -1}},
  [295] = {
    .name  = "getsockopt",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_STR, ARG_PTR, -1}},
  [296] = {
    .name  = "sendmsg",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [297] = {
    .name  = "recvmsg",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [298] = {
    .name  = "semop",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [299] = {
    .name  = "semget",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [300] = {
    .name  = "semctl",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [301] = {
    .name  = "msgsnd",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [302] = {
    .name  = "msgrcv",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [303] = {
    .name  = "msgget",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [304] = {
    .name  = "msgctl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [305] = {
    .name  = "shmat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [306] = {
    .name  = "shmdt",
    .nargs = 1,
    .args  = {ARG_STR, -1, -1, -1, -1, -1}},
  [307] = {
    .name  = "shmget",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [308] = {
    .name  = "shmctl",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, -1, -1, -1}},
  [309] = {
    .name  = "add_key",
    .nargs = 5,
    .args  = {ARG_STR, ARG_STR, ARG_PTR, ARG_INT, ARG_INT, -1}},
  [310] = {
    .name  = "request_key",
    .nargs = 4,
    .args  = {ARG_STR, ARG_STR, ARG_STR, ARG_INT, -1, -1}},
  [311] = {
    .name  = "keyctl",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [312] = {
    .name  = "semtimedop",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, -1, -1}},
  [313] = {
    .name  = "vserver",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [314] = {
    .name  = "ioprio_set",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [315] = {
    .name  = "ioprio_get",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [316] = {
    .name  = "inotify_init",
    .nargs = 0,
    .args  = {-1, -1, -1, -1, -1, -1}},
  [317] = {
    .name  = "inotify_add_watch",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [318] = {
    .name  = "inotify_rm_watch",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [319] = {
    .name  = "mbind",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [320] = {
    .name  = "get_mempolicy",
    .nargs = 5,
    .args  = {ARG_PTR, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [321] = {
    .name  = "set_mempolicy",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [322] = {
    .name  = "openat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [323] = {
    .name  = "mkdirat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [324] = {
    .name  = "mknodat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, -1, -1}},
  [325] = {
    .name  = "fchownat",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [326] = {
    .name  = "futimesat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, -1, -1, -1}},
  [327] = {
    .name  = "fstatat64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [328] = {
    .name  = "unlinkat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [329] = {
    .name  = "renameat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_STR, -1, -1}},
  [330] = {
    .name  = "linkat",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_INT, ARG_STR, ARG_INT, -1}},
  [331] = {
    .name  = "symlinkat",
    .nargs = 3,
    .args  = {ARG_STR, ARG_INT, ARG_STR, -1, -1, -1}},
  [332] = {
    .name  = "readlinkat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_STR, ARG_INT, -1, -1}},
  [333] = {
    .name  = "fchmodat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [334] = {
    .name  = "faccessat",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
  [335] = {
    .name  = "pselect6",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [336] = {
    .name  = "ppoll",
    .nargs = 5,
    .args  = {ARG_PTR, ARG_INT, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [337] = {
    .name  = "unshare",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [338] = {
    .name  = "set_robust_list",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [339] = {
    .name  = "get_robust_list",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [340] = {
    .name  = "splice",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [341] = {
    .name  = "arm_sync_file_range",
    .nargs = 6,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR, ARG_PTR}},
  [342] = {
    .name  = "tee",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [343] = {
    .name  = "vmsplice",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [344] = {
    .name  = "move_pages",
    .nargs = 6,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, ARG_PTR, ARG_INT}},
  [345] = {
    .name  = "getcpu",
    .nargs = 3,
    .args  = {ARG_PTR, ARG_PTR, ARG_PTR, -1, -1, -1}},
  [346] = {
    .name  = "epoll_pwait",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, ARG_INT}},
  [347] = {
    .name  = "kexec_load",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_INT, -1, -1}},
  [348] = {
    .name  = "utimensat",
    .nargs = 4,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_INT, -1, -1}},
  [349] = {
    .name  = "signalfd",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [350] = {
    .name  = "timerfd_create",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [351] = {
    .name  = "eventfd",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [352] = {
    .name  = "fallocate",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1, -1}},
  [353] = {
    .name  = "timerfd_settime",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [354] = {
    .name  = "timerfd_gettime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [355] = {
    .name  = "signalfd4",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [356] = {
    .name  = "eventfd2",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [357] = {
    .name  = "epoll_create1",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [358] = {
    .name  = "dup3",
    .nargs = 3,
    .args  = {ARG_INT, ARG_INT, ARG_INT, -1, -1, -1}},
  [359] = {
    .name  = "pipe2",
    .nargs = 2,
    .args  = {ARG_PTR, ARG_INT, -1, -1, -1, -1}},
  [360] = {
    .name  = "inotify_init1",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [361] = {
    .name  = "preadv",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [362] = {
    .name  = "pwritev",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_INT, -1}},
  [363] = {
    .name  = "rt_tgsigqueueinfo",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_PTR, -1, -1}},
  [364] = {
    .name  = "perf_event_open",
    .nargs = 5,
    .args  = {ARG_PTR, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [365] = {
    .name  = "recvmmsg",
    .nargs = 5,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, ARG_PTR, -1}},
  [366] = {
    .name  = "accept4",
    .nargs = 4,
    .args  = {ARG_SOCK, ARG_PTR, ARG_PTR, ARG_INT, -1, -1}},
  [367] = {
    .name  = "fanotify_init",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [368] = {
    .name  = "fanotify_mark",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_STR, -1}},
  [369] = {
    .name  = "prlimit64",
    .nargs = 4,
    .args  = {ARG_INT, ARG_INT, ARG_PTR, ARG_PTR, -1, -1}},
  [370] = {
    .name  = "name_to_handle_at",
    .nargs = 5,
    .args  = {ARG_INT, ARG_STR, ARG_PTR, ARG_PTR, ARG_INT, -1}},
  [371] = {
    .name  = "open_by_handle_at",
    .nargs = 3,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, -1, -1, -1}},
  [372] = {
    .name  = "clock_adjtime",
    .nargs = 2,
    .args  = {ARG_INT, ARG_PTR, -1, -1, -1, -1}},
  [373] = {
    .name  = "syncfs",
    .nargs = 1,
    .args  = {ARG_INT, -1, -1, -1, -1, -1}},
  [374] = {
    .name  = "sendmmsg",
    .nargs = 4,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_INT, -1, -1}},
  [375] = {
    .name  = "setns",
    .nargs = 2,
    .args  = {ARG_INT, ARG_INT, -1, -1, -1, -1}},
  [376] = {
    .name  = "process_vm_readv",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [377] = {
    .name  = "process_vm_writev",
    .nargs = 6,
    .args  = {ARG_INT, ARG_PTR, ARG_INT, ARG_PTR, ARG_INT, ARG_INT}},
  [378] = {
    .name  = "kcmp",
    .nargs = 5,
    .args  = {ARG_INT, ARG_INT, ARG_INT, ARG_INT, ARG_INT, -1}},
  [379] = {
    .name  = "finit_module",
    .nargs = 3,
    .args  = {ARG_INT, ARG_STR, ARG_INT, -1, -1, -1}},
};
