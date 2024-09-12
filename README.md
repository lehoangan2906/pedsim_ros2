# Pedestrian Simulator

ROS2 packages for a 2D pedestrian simulator based on social force

model of [Helbing et. al](http://arxiv.org/pdf/cond-mat/9805244.pdf). The implementation is based on an extended version of Christian Gloor's [libpedsim](http://pedsim.silmaril.org/) library which has been extended to include additional behaviors and activities. This packages is useful for robot navigation experiments with crowded scenes which are hard to acquire in practice.

### Features
- Individual walking using social force model for very large crowds in real time
- Group walking using the extended social force model
- Social activities simulation
- Sensors simulation (point clouds in robot frame for people and walls)
- XML based scene design
- Extensive visualization using Rviz
- Option to connect with gazebo for physics reasoning

### Requirements
- ROS2 (currently tested on `humble`). `
- C++14 compiler

### Installation

```
git clone git@github.com:lehoangan2906/pedsim_ros2.git
cd pedsim_ros2
colcon build
```

### Sample usage with Turtlebot3
```
ros2 launch pedsim_gazebo_plugin gazebo_tb3_house_demo_launch.py
```

### My modification

- I have modify this project to use both the turtlebot3 burger and waffle models. As well as replaced the default depth camera for the robot from Intel RealSense R200 to Intel RealSense D415 (Installation Instruction: https://github.com/IntelRealSense/realsense-ros/tree/ros2-master?tab=readme-ov-file#installation-on-ubuntu)

- To use my modified robot, refer to https://github.com/lehoangan2906/nav2_bringup. As the pedsim_ros2 project has dependencies on this repository.

### Licence
The core `libpedsim` is licensed under LGPL. The ROS integration and extensions are licensed under BSD.

### Developers
* Billy Okal
* Timm Linder


### Contributors
* Dizan Vasquez
* Sven Wehner
* Omar Islas
* Luigi Palmieri
* Jonatan Gines Clavero
* Chittaranjan Srinivas Swaminathan
* Stephen Adhisaputra

The package is a **work in progress** mainly used in research prototyping. Pull requests and/or issues are highly encouraged.


### Note
- The original repository of the pedsim simulation project is hosted on https://github.com/srl-freiburg/pedsim_ros. But this project was originally developed for working with ROS1.

- The modified ROS2 version of the project is currently hosted on https://github.com/stephenadhi/pedsim_ros. But since I want to properly construct my project, I created this seperate repository. All of Stephen Adhisaputra and his team's works and contributions are still preserved.

- When you first launch this project, the Gazebo simulator might need a while to load the model up. So if it says Gazebo is not responding, just leave it there for haft an hour or so, then cancel the launch command and re-run it.
