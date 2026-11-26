# fritchii

Performance fork downstream of Lichii and Eglantine focused on *Ocarina of Time* stability across AMD Radeon drivers and constrained 4GB–8GB VRAM cards.
<img width="596" height="335" alt="images1" src="https://github.com/user-attachments/assets/a82b3338-1668-489d-b992-943946ae64bf" />
<img width="2048" height="816" alt="images2" src="https://github.com/user-attachments/assets/69fca8d4-4237-4799-9533-f7085d309cca" />

## Key Engineering Changes

Radeon discrete GPUs regain the extra GPU render thread after tracing stale vertex buffer lists with Radeon GPU Detective. Occlusion culling defaults to `Full` on AMD hardware, compiles variants asynchronously to disk, and pairs with widened SSD chunk read-aheads so Castle Town rotations no longer thrash texture memory.

Default window filtering uses **FSR 1** (adjustable sharpening) alongside **Automatic** DLSS model selection. Out-of-memory conditions pause and retry cleanly while writing the offending GPU operation to the hang log.

<img width="480" height="360" alt="images3" src="https://github.com/user-attachments/assets/8d032a2e-0cde-4fbb-b3b3-ed0e354aa8d4" />
<img width="1280" height="720" alt="images4" src="https://github.com/user-attachments/assets/de992751-022b-47b6-9cdf-e81f90c7988e" />

## Building the VRAM Tracker

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/vram_tracker 6144
```

<details>
<summary>Visual Captures (5)</summary>

<img width="739" height="415" alt="images5" src="https://github.com/user-attachments/assets/19c4cfd7-c803-40ee-8d8b-10c14ff6fb5c" />

</details>
