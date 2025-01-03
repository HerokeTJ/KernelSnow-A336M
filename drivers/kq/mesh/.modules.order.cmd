cmd_drivers/kq/mesh/modules.order := {   echo drivers/kq/mesh/mesh.ko; :; } | awk '!x[$$0]++' - > drivers/kq/mesh/modules.order
