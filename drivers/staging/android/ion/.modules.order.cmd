cmd_drivers/staging/android/ion/modules.order := {   cat drivers/staging/android/ion/heaps/modules.order; :; } | awk '!x[$$0]++' - > drivers/staging/android/ion/modules.order
