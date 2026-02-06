#pragma once

#include <stdint.h>

namespace blaze {
    namespace gl {
        enum class ContextProfile : uint8_t {
            Unknown = 0,
            Core,
            Compatability,
        };

        class GLContext {
        public:
            virtual ~GLContext();
        };
    }
}