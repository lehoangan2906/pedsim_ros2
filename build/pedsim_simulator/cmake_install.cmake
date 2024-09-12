# Install script for directory: /home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/anlh/pedsim_ros2/install/pedsim_simulator")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "DEBUG")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator/launch")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator/maps")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator/rviz")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator/scenarios")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE DIRECTORY FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator/config")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator" TYPE EXECUTABLE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/pedsim_simulator")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator"
         OLD_RPATH "/home/anlh/pedsim_ros2/install/pedsim_srvs/lib:/home/anlh/ros2_humble/install/std_srvs/lib:/home/anlh/ros2_humble/install/nav_msgs/lib:/home/anlh/ros2_humble/install/tf2_ros/lib:/home/anlh/ros2_humble/install/geometry_msgs/lib:/home/anlh/ros2_humble/install/rclcpp/lib:/home/anlh/pedsim_ros2/install/pedsim_msgs/lib:/home/anlh/ros2_humble/install/tf2/lib:/home/anlh/ros2_humble/install/message_filters/lib:/home/anlh/ros2_humble/install/rclcpp_action/lib:/home/anlh/ros2_humble/install/libstatistics_collector/lib:/home/anlh/ros2_humble/install/rosgraph_msgs/lib:/home/anlh/ros2_humble/install/statistics_msgs/lib:/home/anlh/ros2_humble/install/rcl_action/lib:/home/anlh/ros2_humble/install/rcl/lib:/home/anlh/ros2_humble/install/rcl_interfaces/lib:/home/anlh/ros2_humble/install/rcl_yaml_param_parser/lib:/home/anlh/ros2_humble/install/libyaml_vendor/lib:/home/anlh/ros2_humble/install/tracetools/lib:/home/anlh/ros2_humble/install/rmw_implementation/lib:/home/anlh/ros2_humble/install/ament_index_cpp/lib:/home/anlh/ros2_humble/install/rcl_logging_spdlog/lib:/home/anlh/ros2_humble/install/rcl_logging_interface/lib:/home/anlh/ros2_humble/install/tf2_msgs/lib:/home/anlh/ros2_humble/install/std_msgs/lib:/home/anlh/ros2_humble/install/action_msgs/lib:/home/anlh/ros2_humble/install/builtin_interfaces/lib:/home/anlh/ros2_humble/install/unique_identifier_msgs/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/anlh/ros2_humble/install/fastcdr/lib:/home/anlh/ros2_humble/install/rmw/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_c/lib:/home/anlh/ros2_humble/install/rcpputils/lib:/home/anlh/ros2_humble/install/rosidl_runtime_c/lib:/home/anlh/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_simulator")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator" TYPE EXECUTABLE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/pedsim_xml_to_occ_map")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map"
         OLD_RPATH "/home/anlh/pedsim_ros2/install/pedsim_srvs/lib:/home/anlh/ros2_humble/install/std_srvs/lib:/home/anlh/ros2_humble/install/nav_msgs/lib:/home/anlh/ros2_humble/install/tf2_ros/lib:/home/anlh/ros2_humble/install/geometry_msgs/lib:/home/anlh/ros2_humble/install/rclcpp/lib:/home/anlh/pedsim_ros2/install/pedsim_msgs/lib:/home/anlh/ros2_humble/install/tf2/lib:/home/anlh/ros2_humble/install/message_filters/lib:/home/anlh/ros2_humble/install/rclcpp_action/lib:/home/anlh/ros2_humble/install/libstatistics_collector/lib:/home/anlh/ros2_humble/install/rosgraph_msgs/lib:/home/anlh/ros2_humble/install/statistics_msgs/lib:/home/anlh/ros2_humble/install/rcl_action/lib:/home/anlh/ros2_humble/install/rcl/lib:/home/anlh/ros2_humble/install/rcl_interfaces/lib:/home/anlh/ros2_humble/install/rcl_yaml_param_parser/lib:/home/anlh/ros2_humble/install/libyaml_vendor/lib:/home/anlh/ros2_humble/install/tracetools/lib:/home/anlh/ros2_humble/install/rmw_implementation/lib:/home/anlh/ros2_humble/install/ament_index_cpp/lib:/home/anlh/ros2_humble/install/rcl_logging_spdlog/lib:/home/anlh/ros2_humble/install/rcl_logging_interface/lib:/home/anlh/ros2_humble/install/tf2_msgs/lib:/home/anlh/ros2_humble/install/std_msgs/lib:/home/anlh/ros2_humble/install/action_msgs/lib:/home/anlh/ros2_humble/install/builtin_interfaces/lib:/home/anlh/ros2_humble/install/unique_identifier_msgs/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/anlh/ros2_humble/install/fastcdr/lib:/home/anlh/ros2_humble/install/rmw/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/anlh/ros2_humble/install/rosidl_typesupport_c/lib:/home/anlh/ros2_humble/install/rcpputils/lib:/home/anlh/ros2_humble/install/rosidl_runtime_c/lib:/home/anlh/ros2_humble/install/rcutils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pedsim_simulator/pedsim_xml_to_occ_map")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/pedsim_simulator")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/pedsim_simulator")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator/environment" TYPE FILE FILES "/home/anlh/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator/environment" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator/environment" TYPE FILE FILES "/home/anlh/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator/environment" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_index/share/ament_index/resource_index/packages/pedsim_simulator")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator/cmake" TYPE FILE FILES "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator/cmake" TYPE FILE FILES
    "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_core/pedsim_simulatorConfig.cmake"
    "/home/anlh/pedsim_ros2/build/pedsim_simulator/ament_cmake_core/pedsim_simulatorConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pedsim_simulator" TYPE FILE FILES "/home/anlh/pedsim_ros2/src/pedsim_ros2/pedsim_simulator/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/anlh/pedsim_ros2/build/pedsim_simulator/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")