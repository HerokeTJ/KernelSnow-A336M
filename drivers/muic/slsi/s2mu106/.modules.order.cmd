cmd_drivers/muic/slsi/s2mu106/modules.order := {   echo drivers/muic/slsi/s2mu106/muic_s2mu106.ko; :; } | awk '!x[$$0]++' - > drivers/muic/slsi/s2mu106/modules.order
