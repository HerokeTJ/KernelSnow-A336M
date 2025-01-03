cmd_drivers/devfreq/event/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/devfreq/event/modules.order
