# Install script for directory: /home/nvidia/catkin_ws/src/turtlebot3_applications/turtlebot3_automatic_parking_vision

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nvidia/catkin_ws/install")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  include("/home/nvidia/catkin_ws/build/turtlebot3_applications/turtlebot3_automatic_parking_vision/catkin_generated/safe_execute_install.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/nvidia/catkin_ws/build/turtlebot3_applications/turtlebot3_automatic_parking_vision/catkin_generated/installspace/turtlebot3_automatic_parking_vision.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_automatic_parking_vision/cmake" TYPE FILE FILES
    "/home/nvidia/catkin_ws/build/turtlebot3_applications/turtlebot3_automatic_parking_vision/catkin_generated/installspace/turtlebot3_automatic_parking_visionConfig.cmake"
    "/home/nvidia/catkin_ws/build/turtlebot3_applications/turtlebot3_automatic_parking_vision/catkin_generated/installspace/turtlebot3_automatic_parking_visionConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_automatic_parking_vision" TYPE FILE FILES "/home/nvidia/catkin_ws/src/turtlebot3_applications/turtlebot3_automatic_parking_vision/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_automatic_parking_vision" TYPE PROGRAM FILES "/home/nvidia/catkin_ws/build/turtlebot3_applications/turtlebot3_automatic_parking_vision/catkin_generated/installspace/automatic_parking_vision")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_automatic_parking_vision" TYPE DIRECTORY FILES
    "/home/nvidia/catkin_ws/src/turtlebot3_applications/turtlebot3_automatic_parking_vision/launch"
    "/home/nvidia/catkin_ws/src/turtlebot3_applications/turtlebot3_automatic_parking_vision/rviz"
    )
endif()

