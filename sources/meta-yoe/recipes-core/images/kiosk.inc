inherit features_check

REQUIRED_DISTRO_FEATURES = "opengl"

IMAGE_FEATURES += "splash"

CORE_IMAGE_BASE_INSTALL += " \
 ${@bb.utils.contains('DISTRO_FEATURES', 'wayland', 'weston weston-init weston-examples', '', d)} \
 ${@bb.utils.contains('DISTRO_FEATURES', 'wayland x11', 'weston-xwayland', '', d)} \
  gstreamer1.0-libav \
"
