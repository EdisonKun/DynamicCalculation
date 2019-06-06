# Install script for directory: /home/kun/catkin_ws/src/webots_ros

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros/msg" TYPE FILE FILES
    "/home/kun/catkin_ws/src/webots_ros/msg/BoolStamped.msg"
    "/home/kun/catkin_ws/src/webots_ros/msg/Float64Stamped.msg"
    "/home/kun/catkin_ws/src/webots_ros/msg/Int32Stamped.msg"
    "/home/kun/catkin_ws/src/webots_ros/msg/Int8Stamped.msg"
    "/home/kun/catkin_ws/src/webots_ros/msg/RadarTarget.msg"
    "/home/kun/catkin_ws/src/webots_ros/msg/RecognitionObject.msg"
    "/home/kun/catkin_ws/src/webots_ros/msg/StringStamped.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros/srv" TYPE FILE FILES
    "/home/kun/catkin_ws/src/webots_ros/srv/camera_get_focus_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/camera_get_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/camera_get_zoom_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_draw_line.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_draw_oval.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_draw_pixel.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_draw_polygon.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_draw_rectangle.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_draw_text.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_get_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_image_copy.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_image_delete.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_image_load.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_image_new.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_image_paste.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_image_save.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/display_set_font.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_bool.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_color.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_count.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_float.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_int32.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_node.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_rotation.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_string.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_type.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_type_name.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_vec2f.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_get_vec3f.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_import_node.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_import_node_from_string.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_remove_node.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_remove.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_bool.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_color.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_float.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_int32.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_rotation.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_string.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_vec2f.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/field_set_vec3f.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/get_bool.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/get_float.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/get_int.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/get_string.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/get_uint64.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/gps_decimal_degrees_to_degrees_minutes_seconds.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/lidar_get_frequency_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/lidar_get_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/lidar_get_layer_point_cloud.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/lidar_get_layer_range_image.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/motor_set_control_pid.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/mouse_get_state.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_center_of_mass.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_contact_point.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_field.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_id.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_number_of_contact_points.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_name.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_orientation.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_parent_node.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_position.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_static_balance.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_status.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_type.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_get_velocity.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_remove.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_reset_functions.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_move_viewpoint.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_set_visibility.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/node_set_velocity.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/pen_set_ink_color.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/range_finder_get_info.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/receiver_get_emitter_direction.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/robot_get_device_list.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/robot_set_mode.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/robot_wait_for_user_input_event.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/save_image.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/set_bool.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/set_float.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/set_float_array.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/set_int.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/set_string.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/skin_get_bone_name.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/skin_get_bone_orientation.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/skin_get_bone_position.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/skin_set_bone_orientation.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/skin_set_bone_position.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/speaker_is_sound_playing.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/speaker_speak.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/speaker_play_sound.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/supervisor_get_from_def.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/supervisor_get_from_id.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/supervisor_movie_start_recording.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/supervisor_set_label.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/supervisor_virtual_reality_headset_get_orientation.srv"
    "/home/kun/catkin_ws/src/webots_ros/srv/supervisor_virtual_reality_headset_get_position.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros/cmake" TYPE FILE FILES "/home/kun/catkin_ws/debug/webots_ros/catkin_generated/installspace/webots_ros-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/kun/catkin_ws/debug/devel/include/webots_ros")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/kun/catkin_ws/debug/devel/share/roseus/ros/webots_ros")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/kun/catkin_ws/debug/devel/share/common-lisp/ros/webots_ros")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/kun/catkin_ws/debug/devel/share/gennodejs/ros/webots_ros")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/kun/catkin_ws/debug/devel/lib/python2.7/dist-packages/webots_ros")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/kun/catkin_ws/debug/devel/lib/python2.7/dist-packages/webots_ros")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/kun/catkin_ws/debug/webots_ros/catkin_generated/installspace/webots_ros.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros/cmake" TYPE FILE FILES "/home/kun/catkin_ws/debug/webots_ros/catkin_generated/installspace/webots_ros-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros/cmake" TYPE FILE FILES
    "/home/kun/catkin_ws/debug/webots_ros/catkin_generated/installspace/webots_rosConfig.cmake"
    "/home/kun/catkin_ws/debug/webots_ros/catkin_generated/installspace/webots_rosConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_ros" TYPE FILE FILES "/home/kun/catkin_ws/src/webots_ros/package.xml")
endif()

