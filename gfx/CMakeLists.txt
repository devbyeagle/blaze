file(GLOB_RECURSE BLAZE_FIREFLY_SRC CONFIGURE_DEPENDS *.cpp *.h)

add_library(firefly ${BLAZE_FIREFLY_SRC})

target_include_directories(firefly
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

if(MSVC)
else()
    target_compile_options(firefly PUBLIC -Werror=switch)
endif()