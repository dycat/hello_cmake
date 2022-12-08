cmake_minimum_required(VERSION 3.24)

project(hello)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB REQUIRED glib-2.0)

include_directories(${GLIB_INCLUDE_DIRS})
link_directories(${GLIB_LIBRARY_DIRS})

add_executable(${PROJECT_NAME} hello.c)

target_link_libraries(${PROJECT_NAME} ${GLIB_LIBRARIES})