# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pedsim_visualizer_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pedsim_visualizer_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pedsim_visualizer_FOUND FALSE)
  elseif(NOT pedsim_visualizer_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pedsim_visualizer_FOUND FALSE)
  endif()
  return()
endif()
set(_pedsim_visualizer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pedsim_visualizer_FIND_QUIETLY)
  message(STATUS "Found pedsim_visualizer: 0.1.0 (${pedsim_visualizer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pedsim_visualizer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${pedsim_visualizer_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pedsim_visualizer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${pedsim_visualizer_DIR}/${_extra}")
endforeach()