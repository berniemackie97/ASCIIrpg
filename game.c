#include "project.h"

void game_startup() { InitAudioDevice(); }
void game_update() {}
void game_draw() {
  BeginDrawing();
  ClearBackground(SKYBLUE);

  EndDrawing();
}
void game_shutdown() { CloseAudioDevice(); }
