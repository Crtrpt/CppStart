cmake_minimum_required(VERSION 3.16)
project(CppStart VERSION 0.1 LANGUAGES CXX ASM_MASM)



set(CMAKE_CXX_STANDARD 20)
add_library(Server STATIC Server.cpp)
add_library(Client SHARED Client.cpp)

add_executable(CppStart CppStart.cpp foo.asm)
target_link_libraries(CppStart Server)
target_link_libraries(CppStart Client)



