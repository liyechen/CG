cmake_minimum_required(VERSION 3.16)
project(CG)

set(CMAKE_CXX_STANDARD 20)

add_executable(CG main.cpp)

find_package(Vulkan REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARIES})


# GLFW
target_link_libraries(CG glfw)


find_package(glm REQUIRED)
include_directories(${GLM_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} glm)

#find_package(glfw3 3.2 REQUIRED)
#include_directories(${GLFW_INCLUDE_DIRS})
#target_link_libraries(${PROJECT_NAME} ${GLFW_LIBRARIES})
#
