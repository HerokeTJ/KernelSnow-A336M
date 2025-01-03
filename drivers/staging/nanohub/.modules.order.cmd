cmd_drivers/staging/nanohub/modules.order := {   echo drivers/staging/nanohub/nanohub.ko; :; } | awk '!x[$$0]++' - > drivers/staging/nanohub/modules.order
