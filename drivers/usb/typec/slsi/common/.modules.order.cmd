cmd_drivers/usb/typec/slsi/common/modules.order := {   echo drivers/usb/typec/slsi/common/s2m_pdic_notifier_module.ko; :; } | awk '!x[$$0]++' - > drivers/usb/typec/slsi/common/modules.order
