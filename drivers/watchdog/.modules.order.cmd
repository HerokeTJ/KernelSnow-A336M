cmd_drivers/watchdog/modules.order := {   echo drivers/watchdog/s3c2410_wdt.ko;   echo drivers/watchdog/softdog.ko; :; } | awk '!x[$$0]++' - > drivers/watchdog/modules.order
