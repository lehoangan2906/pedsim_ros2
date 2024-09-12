#----------------------------------------------------------------
# Generated CMake target import file for configuration "DEBUG".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pedsim_srvs::pedsim_srvs__rosidl_typesupport_c" for configuration "DEBUG"
set_property(TARGET pedsim_srvs::pedsim_srvs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(pedsim_srvs::pedsim_srvs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpedsim_srvs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_DEBUG "libpedsim_srvs__rosidl_typesupport_c.so"
  )

list(APPEND _cmake_import_check_targets pedsim_srvs::pedsim_srvs__rosidl_typesupport_c )
list(APPEND _cmake_import_check_files_for_pedsim_srvs::pedsim_srvs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libpedsim_srvs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
