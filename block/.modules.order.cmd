cmd_block/modules.order := {   cat block/partitions/modules.order;   echo block/ssg.ko;   echo block/blk-sec-stats.ko; :; } | awk '!x[$$0]++' - > block/modules.order
