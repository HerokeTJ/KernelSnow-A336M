cmd_drivers/regulator/pmic_class/modules.order := {   echo drivers/regulator/pmic_class/pmic_class.ko; :; } | awk '!x[$$0]++' - > drivers/regulator/pmic_class/modules.order
