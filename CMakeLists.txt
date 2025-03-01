cmake_minimum_required(VERSION 3.10)

project(Meowgine)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(vendor/glfw)

add_executable(Meowgine source/main.cpp)

target_include_directories(Meowgine PRIVATE vendor/glfw/include)

if (WIN32)
    target_link_libraries(Meowgine PRIVATE opengl32)
elseif (UNIX)
    target_link_libraries(Meowgine PRIVATE GL)
endif ()

target_link_libraries(Meowgine PRIVATE glfw)