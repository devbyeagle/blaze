cmake_minimum_required(VERSION 3.16)
project(Blaze VERSION 0.1)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(BUILD_SHARED_LIBS "Build shared libraries" TRUE)

# Add subdirectories
add_subdirectory(gfx)
add_subdirectory(browser)