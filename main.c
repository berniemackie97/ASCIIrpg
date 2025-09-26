#include "project.h"

int main(void) {
  InitWindow(800, 600, "Raylib 2D ASCII RPG");
  SetTargetFPS(60);
  srand(time(NULL));

  game_startup();

  while (!WindowShouldClose()) {
    // update game
    game_update();
    // draw to game
    game_draw();
  }

  game_shutdown();
  CloseWindow();

  return 0;
}
