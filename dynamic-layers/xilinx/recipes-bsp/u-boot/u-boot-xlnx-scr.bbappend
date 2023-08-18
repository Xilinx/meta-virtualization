# Include xen-boot-cmd.inc only if ENABLE_XEN_UBOOT_SCR is set from configuration
# file.
ENABLE_XEN_UBOOT_SCR ?= ""
include ${@'xen-boot-cmd.inc' if d.getVar('ENABLE_XEN_UBOOT_SCR') == '1' else ''}
