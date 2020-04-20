XEN_CONSOLES ?= "115200;hvc0"

# Ensure that hvc0 is removed from the inittab on first boot
# if the console doesn't exist
XEN_CONSOLES_CHECK ?= "115200;hvc0"

# Exploit the SERIAL_CONSOLES_CHECK to remove our entries if
# any of them do not exist.
SERIAL_CONSOLES_CHECK_append = "${@' ${XEN_CONSOLES_CHECK}' if d.getVar('XEN_CONSOLES_CHECK') else ''}"

FILESEXTRAPATHS_append := "${THISDIR}/files:"

SRC_URI += "file://xen_getty"

do_install_append() {
    install -m 0755 ${WORKDIR}/xen_getty ${D}${base_bindir}/xen_getty
    sed -e 's,/usr/bin,${bindir},g' -i ${D}${base_bindir}/xen_getty

    set -x
    tmp="${XEN_CONSOLES}"
    for i in $tmp
    do
        j=`echo ${i} | sed s/\;/\ /g`
        l=`echo ${i} | sed -e 's/tty//' -e 's/^.*;//' -e 's/;.*//'`
        label=`echo $l | sed 's/.*\(....\)/\1/'`
        echo "$label:12345:respawn:${base_bindir}/xen_getty ${j} vt102" >> ${D}${sysconfdir}/inittab
    done
}

FILES_${PN} += "${base_bindir}/xen_getty"
