cmd_drivers/misc/tui/modules.order := {   echo drivers/misc/tui/tuihw.ko;   echo drivers/misc/tui/tuihw-inf.ko; :; } | awk '!x[$$0]++' - > drivers/misc/tui/modules.order
