cmake_minimum_required(VERSION 3.19)
project(CppStart)


if(NOT TARGET spdlog)
    # Stand-alone build
    find_package(spdlog REQUIRED)
endif()


set(CMAKE_CXX_STANDARD 20)

add_executable(CppStart CppStart.cpp Server.cpp Server.h)

target_link_libraries(CppStart PRIVATE spdlog::spdlog)
