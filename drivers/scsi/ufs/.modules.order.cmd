cmd_drivers/scsi/ufs/modules.order := {   echo drivers/scsi/ufs/ufs-exynos-core.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/ufs/modules.order
