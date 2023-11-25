#include "AFK/MemUtils.hpp"


namespace AFK::MemUtils {

    [[nodiscard]]
    bool MemCopy(byte* const dst, usize const dst_size, byte const* const src, usize const src_size) noexcept
    {
        if(src_size < dst_size)
        {
            return false;
        }
        MemCopyUnchecked(dst, src, src_size);
        return true;
    }

    void MemCopyUnchecked(byte* const dst, byte const* const src, usize const src_size) noexcept
    {
        // TODO(Andrew, ): vectorize
        for(usize i = 0; i < src_size; ++i)
        {
            dst[i] = src[i];
        }
    }
}