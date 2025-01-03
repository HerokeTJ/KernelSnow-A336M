cmd_drivers/soc/samsung/ect_parser/modules.order := {   echo drivers/soc/samsung/ect_parser/ect_parser.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/ect_parser/modules.order
