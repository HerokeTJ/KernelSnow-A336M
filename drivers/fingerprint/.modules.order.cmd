cmd_drivers/fingerprint/modules.order := {   echo drivers/fingerprint/fingerprint.ko;   echo drivers/fingerprint/fingerprint_sysfs.ko; :; } | awk '!x[$$0]++' - > drivers/fingerprint/modules.order
