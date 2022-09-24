project(gtk_project C CXX)
cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-4.0)
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(app src/main.cpp src/helloworld.cpp)
target_link_libraries(app ${GTKMM_LIBRARIES})
target_include_directories(app PRIVATE src)
