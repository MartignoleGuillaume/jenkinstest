project(strikeback)
cmake_minimum_required(VERSION 2.8)
add_definitions(-std=c++11)
SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/modules ${CMAKE_MODULE_PATH})

find_package(SFML COMPONENTS graphics window system REQUIRED)
include_directories(${SFML_INCLUDE_DIR})

find_package(OpenGL REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/common/include)
include_directories(${PROJECT_SOURCE_DIR}/gui/include)
include_directories(${PROJECT_SOURCE_DIR}/client/include)
include_directories(${PROJECT_SOURCE_DIR}/server/include)

add_subdirectory(common)
add_subdirectory(gui)
add_subdirectory(client)
add_subdirectory(server)
