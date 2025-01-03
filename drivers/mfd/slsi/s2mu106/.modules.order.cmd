cmd_drivers/mfd/slsi/s2mu106/modules.order := {   echo drivers/mfd/slsi/s2mu106/mfd_s2mu106.ko; :; } | awk '!x[$$0]++' - > drivers/mfd/slsi/s2mu106/modules.order
