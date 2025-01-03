cmd_drivers/media/v4l2-core/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/media/v4l2-core/modules.order
