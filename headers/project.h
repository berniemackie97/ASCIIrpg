#ifndef __PROJECT_H_
#define __PROJECT_H_

#include "raylib.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TILE_SIZE 32
#define MAP_WIDTH 20
#define MAP_HEIGHT 14

extern char gamemap[MAP_HEIGHT][MAP_WIDTH];

typedef struct {
  int x, y;
} Player;

// game.c
void game_startup();
void game_update();
void game_draw();
void game_shutdown();

// map.c
Color get_tile_color(char tile);
void draw_map(Vector2 origin);
void draw_player(Vector2 origin, Player player);

#endif
