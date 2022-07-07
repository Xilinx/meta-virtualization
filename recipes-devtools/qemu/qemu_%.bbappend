require ${@bb.utils.contains('DISTRO_FEATURES', 'vmsep', '${BPN}-package-split.inc', '', d)}

require ${@bb.utils.contains('DISTRO_FEATURES', 'xen', '${BPN}-xen-patches.inc', '', d)}
