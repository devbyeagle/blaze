cmake_minimum_required(VERSION 3.16)
project(Blaze VERSION 0.1)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(BUILD_SHARED_LIBS "Build shared libraries" TRUE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

# Subdirectories
add_subdirectory(ui)
add_subdirectory(browser)