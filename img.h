#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>

// Array of 5 bar graph frames (e.g., 0%, 25%, 50%, 75%, 100% length)
const uint8_t bar_graph_frames[5][1024] = {
  // Frame 0: Empty bar (0 pixels)
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ... 1024 bytes of 0x00 ... */
    // All zeros for a blank screen
  },
  // Frame 1: 25% bar (32 pixels)
  {
    /* ... First 640 bytes (y=0 to y=39) are 0x00 ... */
    /* y=40 to y=47 (5th page) */
    0xff, 0xff, 0xff, 0xff, /* 32 pixels on */ 0x00, 0x00, /* ... 96 zeros ... */
    /* ... Next 128 bytes (6th page) repeat for y=41 ... */
    /* ... Last 256 bytes (y=48 to y=63) are 0x00 ... */
  },
  // Frame 2: 50% bar (64 pixels)
  {
    /* ... Similar structure, 64 pixels on per row ... */
  },
  // Frame 3: 75% bar (96 pixels)
  {
    /* ... Similar structure, 96 pixels on per row ... */
  },
  // Frame 4: 100% bar (128 pixels)
  {
    /* ... Similar structure, all 128 pixels on per row ... */
  }
};

#endif
