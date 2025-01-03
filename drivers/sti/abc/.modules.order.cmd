cmd_drivers/sti/abc/modules.order := {   echo drivers/sti/abc/abc.ko;   echo drivers/sti/abc/abc_hub.ko; :; } | awk '!x[$$0]++' - > drivers/sti/abc/modules.order
