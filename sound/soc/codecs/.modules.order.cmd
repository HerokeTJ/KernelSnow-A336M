cmd_sound/soc/codecs/modules.order := {   cat sound/soc/codecs/tas2562/modules.order;   cat sound/soc/codecs/tfa9878/modules.order; :; } | awk '!x[$$0]++' - > sound/soc/codecs/modules.order
