cmd_drivers/android/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/android/modules.order
