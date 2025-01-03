cmd_drivers/pwm/modules.order := {   echo drivers/pwm/pwm-samsung.ko; :; } | awk '!x[$$0]++' - > drivers/pwm/modules.order
