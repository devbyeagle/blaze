cmake_minimum_required(VERSION 3.14)

project(blaze VERSION 0.1)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(BUILD_SHARED_LIBS "Build shared libraries" ON)

# Add subdirectories
add_subdirectory(gfx)
add_subdirectory(browser)