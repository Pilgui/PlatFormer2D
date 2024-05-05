cmake_minimum_required(VERSION 3.27)
project(PlatFormer2D)

set(CMAKE_CXX_STANDARD 20)

set(BUILD_SHARED_LIBS FALSE)

include(FetchContent)

FETCHCONTENT_DECLARE(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG 10.2.1
)
FETCHCONTENT_MAKEAVAILABLE(fmt)

FetchContent_Declare(
        SFML
        GIT_REPOSITORY  https://github.com/SFML/SFML
        GIT_TAG         2.6.1
)

FetchContent_MakeAvailable(SFML)

add_executable(PlatFormer2D main.cpp
        Player.cpp
        Player.h
        Window.cpp
        Window.h
        GameLogic.cpp
        GameLogic.h)
target_link_libraries(PlatFormer2D fmt sfml-graphics)
