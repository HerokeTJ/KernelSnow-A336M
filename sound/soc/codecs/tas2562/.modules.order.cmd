cmd_sound/soc/codecs/tas2562/modules.order := {   echo sound/soc/codecs/tas2562/snd-soc-tas2562.ko; :; } | awk '!x[$$0]++' - > sound/soc/codecs/tas2562/modules.order
