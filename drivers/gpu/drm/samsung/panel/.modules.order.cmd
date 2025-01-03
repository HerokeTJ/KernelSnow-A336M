cmd_drivers/gpu/drm/samsung/panel/modules.order := {   echo drivers/gpu/drm/samsung/panel/mcd-panel.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/samsung/panel/modules.order
