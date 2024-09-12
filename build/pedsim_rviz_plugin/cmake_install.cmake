# Install script for directory: /home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_rviz_plugin

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/anlh/pedsim_ros2/install/pedsim_rviz_plugin")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_rviz_plugin/plugins_description.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/environment" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/libpedsim_rviz_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so"
         OLD_RPATH "/home/anlh/ros2_humble/install/rviz_ogre_vendor/opt/rviz_ogre_vendor/lib:/home/anlh/pedsim_ros2/install/pedsim_msgs/lib:/home/anlh/ros2_humble/install/rviz_default_plugins/lib:/home/anlh/ros2_humble/install/rviz_common/lib:/home/anlh/ros2_humble/install/rviz_rendering/lib:/home/anlh/ros2_humble/install/resource_retriever/lib:/home/anlh/ros2_humble/install/tf2_ros/lib:/home/anlh/ros2_humble/install/rclcpp_action/lib:/home/anlh/ros2_humble/install/rcl_action/lib:/home/anlh/ros2_humble/install/tf2_msgs/lib:/home/anlh/ros2_humble/install/action_msgs/lib:/home/anlh/ros2_humble/install/unique_identifier_msgs/lib:/home/anlh/ros2_humble/install/urdf/lib:/home/anlh/ros2_humble/install/class_loader/lib:/home/anlh/ros2_humble/install/urdfdom/lib:/home/anlh/ros2_humble/install/image_transport/lib:/home/anlh/ros2_humble/install/message_filters/lib:/home/anlh/ros2_humble/install/interactive_markers/lib:/home/anlh/ros2_humble/install/laser_geometry/lib:/home/anlh/ros2_humble/install/rclcpp/lib:/home/anlh/ros2_humble/install/libstatistics_collector/lib:/home/anlh/ros2_humble/install/rcl/lib:/home/anlh/ros2_humble/install/rmw_implementation/lib:/home/anlh/ros2_humble/install/ament_index_cpp/lib:/home/anlh/ros2_humble/install/rcl_logging_spdlog/lib:/home/anlh/ros2_humble/install/rcl_logging_interface/lib:/home/anlh/ros2_humble/install/rcl_interfaces/lib:/home/anlh/ros2_humble/install/rcl_yaml_param_parser/lib:/home/anlh/ros2_humble/install/libyaml_vendor/lib:/home/anlh/ros2_humble/install/rosgraph_msgs/lib:/home/anlh/ros2_humble/install/statistics_msgs/lib:/home/anlh/ros2_humble/install/tracetools/lib:/home/anlh/ros2_humble/install/tf2/lib:/home/anlh/ros2_humble/install/map_msgs/lib:/home/anlh/ros2_humble/install/nav_msgs/lib:/home/anlh/ros2_humble/install/visualization_msgs/lib:/home/anlh/ros2_humble/install/sensor_msgs/lib:/home/anlh/ros2_humble/install/geometry_msgs/lib:/home/anlh/ros2_humble/install/std_msgs/lib:/home/anlh/ros2_humble/install/builtin_interfaces/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/anlh/ros2_humble/install/fastcdr/lib:/home/anlh/ros2_humble/install/rmw/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_c/lib:/home/anlh/ros2_humble/install/rosidl_runtime_c/lib:/home/anlh/ros2_humble/install/rcpputils/lib:/home/anlh/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpedsim_rviz_plugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_rviz_plugin/include")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_rviz_plugin/media")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_rviz_plugin/icons")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/pedsim_rviz_plugin")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/pedsim_rviz_plugin")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/environment" TYPE FILE FILES "/home/anlh/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/environment" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/environment" TYPE FILE FILES "/home/anlh/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/environment" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_index/share/ament_index/resource_index/packages/pedsim_rviz_plugin")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rviz_common__pluginlib__plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_index/share/ament_index/resource_index/rviz_common__pluginlib__plugin/pedsim_rviz_plugin")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake/pedsim_rviz_pluginExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake/pedsim_rviz_pluginExport.cmake"
         "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/CMakeFiles/Export/f7c9c50badf22f9d465fe38860cfbe63/pedsim_rviz_pluginExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake/pedsim_rviz_pluginExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake/pedsim_rviz_pluginExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/CMakeFiles/Export/f7c9c50badf22f9d465fe38860cfbe63/pedsim_rviz_pluginExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/CMakeFiles/Export/f7c9c50badf22f9d465fe38860cfbe63/pedsim_rviz_pluginExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin/cmake" TYPE FILE FILES
    "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_core/pedsim_rviz_pluginConfig.cmake"
    "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/ament_cmake_core/pedsim_rviz_pluginConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_rviz_plugin" TYPE FILE FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_rviz_plugin/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/anlh/pedsim_ros2/build/pedsim_rviz_plugin/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
