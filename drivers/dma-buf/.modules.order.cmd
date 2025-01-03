cmd_drivers/dma-buf/modules.order := {   cat drivers/dma-buf/heaps/modules.order; :; } | awk '!x[$$0]++' - > drivers/dma-buf/modules.order
