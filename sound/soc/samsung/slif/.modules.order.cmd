cmd_sound/soc/samsung/slif/modules.order := {   echo sound/soc/samsung/slif/snd-soc-samsung-slif.ko; :; } | awk '!x[$$0]++' - > sound/soc/samsung/slif/modules.order
