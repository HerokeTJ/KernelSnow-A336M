cmd_drivers/scsi/modules.order := {   cat drivers/scsi/ufs/modules.order;   echo drivers/scsi/scsi_srpmb.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/modules.order
