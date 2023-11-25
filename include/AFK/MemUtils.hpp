#pragma once

#include "BasicTypes.hpp"

namespace AFK::MemUtils {

    [[nodiscard]]
    bool MemCopy(byte* const dst, usize const dst_size, byte const* const src, usize const src_size) noexcept;
    void MemCopyUnchecked(byte* const dst, byte const* const src, usize const src_size) noexcept;
}