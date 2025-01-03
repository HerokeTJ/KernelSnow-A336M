cmd_block/ssg.mod := { echo  block/ssg-iosched.o block/ssg-cgroup.o; llvm-nm block/ssg.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > block/ssg.mod
