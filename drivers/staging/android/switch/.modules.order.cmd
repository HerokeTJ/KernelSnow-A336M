cmd_drivers/staging/android/switch/modules.order := {   echo drivers/staging/android/switch/switch_class.ko; :; } | awk '!x[$$0]++' - > drivers/staging/android/switch/modules.order
