cmd_drivers/media/common/videobuf2/modules.order := {   echo drivers/media/common/videobuf2/videobuf2-dma-sg.ko; :; } | awk '!x[$$0]++' - > drivers/media/common/videobuf2/modules.order
