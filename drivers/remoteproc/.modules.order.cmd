cmd_drivers/remoteproc/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/remoteproc/modules.order
