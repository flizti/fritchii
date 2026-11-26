#pragma once
#include <cstdint>
#include <string>

namespace fritchii {
struct PoolPlan {
    std::uint32_t pinned_mb;
    std::uint32_t reserve_mb;
    std::string occlusion_mode;
};
PoolPlan compute_pool(std::uint32_t vram_mb);
}
