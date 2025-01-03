cmd_drivers/rpmsg/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/rpmsg/modules.order
