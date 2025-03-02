cmake_minimum_required(VERSION 3.10)

project(Meowgine)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(vendor/glfw)

file(GLOB_RECURSE SRC_FILES source/*.cpp)
add_executable(Meowgine ${SRC_FILES})

target_include_directories(Meowgine PRIVATE vendor/glfw/include)

if (WIN32)
    target_link_libraries(Meowgine PRIVATE opengl32)
elseif (UNIX)
    target_link_libraries(Meowgine PRIVATE GL)
endif ()

target_link_libraries(Meowgine PRIVATE glfw)