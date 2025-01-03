cmd_drivers/muic/common/modules.order := {   echo drivers/muic/common/common_muic.ko;   echo drivers/muic/common/muic_manager.ko; :; } | awk '!x[$$0]++' - > drivers/muic/common/modules.order
