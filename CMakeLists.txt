cmake_minimum_required(VERSION 3.19)
project(CppStart)

set(CMAKE_CXX_STANDARD 20)
add_library(Server STATIC Server.cpp)
add_library(Client SHARED Client.cpp)


add_executable(CppStart CppStart.cpp)
target_link_libraries(CppStart Server)
target_link_libraries(CppStart Client)



