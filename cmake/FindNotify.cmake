find_package(PkgConfig QUIET)
pkg_check_modules(NOTIFY QUIET libnotify)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Notify DEFAULT_MSG NOTIFY_LIBRARIES NOTIFY_INCLUDE_DIRS)
