#include "../headers/project.h"

char map[MAP_HEIGHT][MAP_WIDTH] = {"####################"
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "...................."
                                   "####################"

};

Color get_tile_color(char tile) {
  switch (tile) {
  case "#":
    return GRAY;
  case ".":
    return DARKGREEN;
  case "^":
    return BROWN;
  case "~":
    return BLUE;
  default:
    return RAYWHITE;
  }
}
