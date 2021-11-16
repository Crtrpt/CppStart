cmake_minimum_required(VERSION 3.16)
project(CppStart VERSION 0.1 LANGUAGES C CXX ASM_MASM )

set(CMAKE_CXX_STANDARD 20)
add_library(Server STATIC Server.cpp)
add_library(Client SHARED Client.cpp log.h)

add_executable(CppStart CppStart.cpp StartAsm.asm)
target_link_libraries(CppStart Server)
target_link_libraries(CppStart Client)



