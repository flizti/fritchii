#include "vram_tracker.hpp"

namespace fritchii {
PoolPlan compute_pool(std::uint32_t vram_mb) {
    if (vram_mb <= 4096) return {3584, 512, "Full"};
    if (vram_mb <= 8192) return {vram_mb - 896, 896, "Full"};
    return {vram_mb - 1536, 1536, "Standard"};
}
}
