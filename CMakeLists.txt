cmake_minimum_required(VERSION 3.16)
project(CppStart VERSION 0.1 LANGUAGES C CXX ASM_MASM)


set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SAFESEH:NO")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /SAFESEH:NO")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} /SAFESEH:NO")


link_directories(rust/rlib/target/i686-pc-windows-msvc/debug/)

add_library(Server STATIC Server.cpp)
add_library(Client SHARED Client.cpp log.h)

add_library(ELK STATIC elk/elk.c)


add_executable(CppStart CppStart.cpp StartAsm.asm Ev.cpp Ev.h)

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMY_DEBUG=Yes")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DMY_DEBUG=Yes")

target_link_libraries(CppStart ws2_32)
target_link_libraries(CppStart userenv)
target_link_libraries(CppStart rlib)


if(ELK)
    message(">>> ELK")
    target_link_libraries(CppStart ELK)
endif()

target_link_libraries(CppStart Server)
target_link_libraries(CppStart Client)



