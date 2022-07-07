FILESEXTRAPATHS:prepend := "${THISDIR}/qemu-xen:"

SRC_URI += " \
    file://0001-xen_common-return-error-from-xen_create_ioreq_server.patch \
    file://0002-xen-mapcache-move-xen-mapcache.c-to-hw-xen.patch \
    file://0003-hw-i386-xen-rearrange-xen_hvm_init_pc.patch \
    file://0004-xen-hvm-move-x86-specific-fields-out-of-XenIOState.patch \
    file://0005-xen-hvm-create-arch_handle_ioreq-and-arch_xen_set_me.patch \
    file://0006-xen-hvm-move-common-functions-to-hw-xen-xen-hvm-comm.patch \
    file://0007-xen-skip-ioreq-creation-on-ioreq-registration-failur.patch \
    file://0008-accel-xen-xen-all-export-xenstore_record_dm_state.patch \
    file://0009-xen-hvm-enable-xen-hvm-common-build-for-ARM.patch \
    file://0010-hw-arm-introduce-xenpv-machine.patch \
    file://0011-build-do-not-set-have_xen_pci_passthrough-for-aarch6.patch \
    file://0012-xen-arm-call-qemu_find_tpm_be-if-CONFIG_TPM.patch \
"
