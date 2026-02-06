target_sources(firefly
    PUBLIC
        GLContext.h
    PRIVATE
        GLContext.cpp
)

if(WIN32)
elseif(UNIX AND NOT APPLE AND NOT ANDROID)
elseif(APPLE)
    if(IOS)
    else()
    endif()
elseif(ANDROID)
else()
    message(FATAL_ERROR "Unknown platform!")
endif()