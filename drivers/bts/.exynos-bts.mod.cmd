cmd_drivers/bts/exynos-bts.mod := { echo  drivers/bts/exynos-bts.o; llvm-nm drivers/bts/exynos-bts.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/bts/exynos-bts.mod
