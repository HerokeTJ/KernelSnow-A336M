cmd_drivers/usb/typec/common/modules.order := {   echo drivers/usb/typec/common/pdic_notifier_module.ko; :; } | awk '!x[$$0]++' - > drivers/usb/typec/common/modules.order
