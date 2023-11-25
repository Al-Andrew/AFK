#pragma once

#include "BasicTypes.hpp"

namespace AFK {

    // TODO(Andrew, Allocator): template for allocator?
    class String {
        public:
            [[nodiscard]]
            constexpr String() noexcept;
            [[nodiscard]]
            constexpr String(char const* const string) noexcept;

            ~String() noexcept;

        private:
            // TODO(Andrew): small string optimization.
            byte* m_bytes;
            usize m_allocated;
            
            usize m_used;
    };

    namespace CStringUtils {
        template<usize len>
        [[nodiscard]]
        constexpr usize length(const char (&str)[len]) noexcept {
            return len;
        }
        
        [[nodiscard]]
        constexpr usize length(const char *str) noexcept;
    }

}