#ifndef WorldConstants_H_INCLUDED
#define WorldConstants_H_INCLUDED

#include <cstdint>

constexpr int   CHUNK_SIZE      = 16,
                CHUNK_VOLUME    = CHUNK_SIZE * CHUNK_SIZE * CHUNK_SIZE,
                CHUNK_AREA      = CHUNK_SIZE * CHUNK_SIZE,
                WATER_LEVEL     = 70,
                BEACH_LEVEL     = WATER_LEVEL + 2;

constexpr int   MAX_LIGHT       = 10;

constexpr float     BLOCK_SIZE      = 1.0f;

#endif // WorldConstants_H_INCLUDED
