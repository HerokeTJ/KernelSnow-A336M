cmd_drivers/vhost/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/vhost/modules.order
