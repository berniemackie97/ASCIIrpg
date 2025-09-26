#include "../headers/project.h"

char gamemap[MAP_HEIGHT][MAP_WIDTH] = {"####################",
                                   "#..................#",
                                   "#..................#",
                                   "#..................#",
                                   "#..................#",
                                   "#..................#",
                                   "#..................#",
                                   "~~~~...............#",
                                   "~~~~~~.............#",
                                   "#..~~~~~...........#",
                                   "#.....~~~~~.......^^",
                                   "#................^^^",
                                   "#..................^",
                                   "####################"

};

  Color get_tile_color(char tile) {
      switch (tile) {
      case '#':
        return GRAY;
      case '.':
        return DARKGREEN;
      case '^' :
        return BROWN;
      case '~':
        return BLUE;
      default:
        return RAYWHITE;
      }
}

void draw_map(Vector2 origin) {
    for (int y = 0; y < MAP_HEIGHT; y++) {
    for (int x = 0; x < MAP_WIDTH; x++) {
        char tile = gamemap[y][x];
        Color tile_color = get_tile_color(tile);
        Vector2 pos = {
            origin.x + x * TILE_SIZE + 8,
            origin.y + y * TILE_SIZE + 6
        };
	    //DrawTextEx(GetFontDefault(), TextFormat("%c", tile), pos, 24, 1, tile_color);
        DrawRectangle(origin.x + x * TILE_SIZE, origin.y + y * TILE_SIZE, TILE_SIZE, TILE_SIZE, tile_color);
    }
    }
}

void draw_player(Vector2 origin, Player player) {
    Vector2 pos = {
        origin.x + player.x * TILE_SIZE + 8,
        origin.y + player.y * TILE_SIZE + 6
    };
    DrawTextEx(GetFontDefault(), "@", pos, 24, 1, YELLOW);
}
