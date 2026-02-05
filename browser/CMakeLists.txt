file(GLOB_RECURSE BLAZE_BROWSER_SRC CONFIGURE_DEPENDS *.cpp *.h)

add_executable(blaze ${BLAZE_BROWSER_SRC})

target_link_libraries(blaze PUBLIC firefly)