#include "vram_tracker.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char** argv) {
    std::uint32_t mb = argc > 1 ? static_cast<std::uint32_t>(std::strtoul(argv[1], nullptr, 10)) : 6144;
    auto plan = fritchii::compute_pool(mb);
    std::cout << "Pinned: " << plan.pinned_mb << " MB | Reserve: " << plan.reserve_mb << " MB | Occlusion: " << plan.occlusion_mode << "\n";
    return 0;
}
