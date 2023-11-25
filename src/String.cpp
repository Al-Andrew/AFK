#include "AFK/String.hpp"
#include "AFK/MemUtils.hpp"

// TODO(Andrew, Allocator): replace with our own allocation lib.
#include <new>


namespace AFK {

    [[nodiscard]]
    constexpr String::String() noexcept
        : m_bytes{nullptr}, m_allocated{0}, m_used{0} {}

    [[nodiscard]]
    constexpr String::String(char const* const string) noexcept 
    {
        usize string_length = CStringUtils::length(string);

        // TODO(Andrew, Allocator): don't use new[].
        m_bytes = new(std::nothrow) byte[m_allocated];
        if(!m_bytes)
        {
            return;
        }
        
        MemUtils::MemCopyUnchecked(m_bytes, reinterpret_cast<byte const* const>(string), string_length);
        m_allocated = string_length;
        m_used = string_length;
    }

    String::~String() noexcept
    {
        // TODO(Andrew, Allocator): don't use delete[].
        if(m_bytes)
        {
            delete[] m_bytes;
        }
    }

    namespace CStringUtils {
        [[nodiscard]]
        constexpr usize length(const char *str) noexcept {
            usize len{0};
            
            while(str[len++] != '\0');

            return len;
        }
    }
}