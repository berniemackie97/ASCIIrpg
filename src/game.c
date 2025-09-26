#include "../headers/project.h"

Player player;


void game_startup() {

  InitAudioDevice();

  player = (Player){ 2, 2 };

}

void game_update() {
	if (IsKeyPressed(KEY_D) && gamemap[player.y][player.x + 1] != '#') player.x++;
	if (IsKeyPressed(KEY_A) && gamemap[player.y][player.x - 1] != '#') player.x--;
	if (IsKeyPressed(KEY_S) && gamemap[player.y + 1][player.x] != '#') player.y++;
	if (IsKeyPressed(KEY_W) && gamemap[player.y - 1][player.x] != '#') player.y--;
}

void game_draw() {
  BeginDrawing();
  ClearBackground(BLACK);

  Vector2 origin = { 0, 0 };
  draw_map(origin);
  draw_player(origin, player);

  EndDrawing();
}

void game_shutdown() {
	CloseAudioDevice(); 
}
