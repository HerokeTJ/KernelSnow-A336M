cmd_drivers/video/modules.order := {   cat drivers/video/backlight/modules.order;   cat drivers/video/fbdev/modules.order; :; } | awk '!x[$$0]++' - > drivers/video/modules.order
