SUMMARY = "protobuf"
DESCRIPTION = "Protocol Buffers are a way of encoding structured data in \
an efficient yet extensible format. Google uses Protocol Buffers for \
almost all of its internal RPC protocols and file formats."
HOMEPAGE = "http://code.google.com/p/protobuf/"
SECTION = "console/tools"
LICENSE = "BSD-3-Clause"

LIC_FILES_CHKSUM = "file://LICENSE;md5=35953c752efc9299b184f91bef540095"

PR = "r0"

SRC_URI[md5sum] = "41f2934b451a82115ccc4aa1f9b156f2"
SRC_URI[sha256sum] = "44e36eee53a7bc8b88935b105c8e2773f6ae9f89e3f25e95f93c4bcac908bb98"
SRC_URI = "https://github.com/google/protobuf/archive/v3.0.0.tar.gz;downloadfilename=protobuf-3.0.0.tar.gz \
	"

EXTRA_OECONF += " --with-protoc=echo --disable-shared"

inherit native autotools

