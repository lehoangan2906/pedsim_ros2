set(_AMENT_PACKAGE_NAME "pedsim_gazebo_plugin")
set(pedsim_gazebo_plugin_VERSION "0.0.1")
set(pedsim_gazebo_plugin_MAINTAINER "jginesclavero <jonatan.gines@urjc.es>")
set(pedsim_gazebo_plugin_BUILD_DEPENDS "gazebo_msgs" "gazebo_ros" "gazebo_plugins" "gazebo_ros_pkgs" "rclcpp" "builtin_interfaces" "pedsim_msgs" "tf2" "tf2_geometry_msgs")
set(pedsim_gazebo_plugin_BUILDTOOL_DEPENDS "ament_cmake")
set(pedsim_gazebo_plugin_BUILD_EXPORT_DEPENDS "builtin_interfaces" "pedsim_msgs" "tf2" "tf2_geometry_msgs")
set(pedsim_gazebo_plugin_BUILDTOOL_EXPORT_DEPENDS )
set(pedsim_gazebo_plugin_EXEC_DEPENDS "gazebo_msgs" "gazebo_ros" "rclcpp" "rclpy" "launch_ros" "builtin_interfaces" "pedsim_msgs" "tf2" "tf2_geometry_msgs")
set(pedsim_gazebo_plugin_TEST_DEPENDS )
set(pedsim_gazebo_plugin_GROUP_DEPENDS )
set(pedsim_gazebo_plugin_MEMBER_OF_GROUPS )
set(pedsim_gazebo_plugin_DEPRECATED "")
set(pedsim_gazebo_plugin_EXPORT_TAGS)
list(APPEND pedsim_gazebo_plugin_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND pedsim_gazebo_plugin_EXPORT_TAGS "<gazebo_ros gazebo_media_path=\"${prefix}\"/>")
list(APPEND pedsim_gazebo_plugin_EXPORT_TAGS "<gazebo_ros gazebo_model_path=\"models\"/>")
list(APPEND pedsim_gazebo_plugin_EXPORT_TAGS "<gazebo_ros gazebo_model_path=\"..\" gazebo_plugin_path=\"lib\"/>")