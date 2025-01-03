cmd_drivers/dma-buf/heaps/modules.order := {   cat drivers/dma-buf/heaps/samsung/modules.order; :; } | awk '!x[$$0]++' - > drivers/dma-buf/heaps/modules.order
