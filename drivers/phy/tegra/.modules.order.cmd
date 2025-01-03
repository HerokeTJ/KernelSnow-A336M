cmd_drivers/phy/tegra/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/phy/tegra/modules.order
