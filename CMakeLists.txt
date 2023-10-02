cmake_minimum_required(VERSION 3.5.1)

project(terminalTypeTester)

set(EXEC ttt)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES src/*.cpp)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(${EXEC}  ${SOURCES})

target_link_libraries(${EXEC} ${CURSES_LIBRARIES})
