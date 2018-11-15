cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)
project(box)

add_executable(box)

target_sources(box PUBLIC "src/box.cpp" "main.cpp")
target_include_directories(box PUBLIC "include")

if (MSVC)
	set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT box)
endif()