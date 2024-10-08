cmake_minimum_required(VERSION 3.5)
project(qiu_1cpp_pkg)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

project(qiu_1cpp_pkg)
add_executable(ros2_cpp_node src/cpp_node.cpp)
add_executable(person_node src/person.cpp)
add_executable(writer_node src/writer.cpp)
ament_target_dependencies(ros2_cpp_node rclcpp)
ament_target_dependencies(person_node rclcpp)
ament_target_dependencies(writer_node rclcpp)
install(TARGETS ros2_cpp_node DESTINATION lib/${PROJECT_NAME})
install(TARGETS person_node DESTINATION lib/${PROJECT_NAME})
install(TARGETS writer_node DESTINATION lib/${PROJECT_NAME})
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()


ament_package()
