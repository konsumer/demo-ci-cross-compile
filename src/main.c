#include "raylib.h"

#define SCREEN_WIDTH (800)
#define SCREEN_HEIGHT (450)

// draw text with centered origin
void DrawCenteredText (const char* text, int x, int y, int fontSize, Color color) {
  const Vector2 text_size = MeasureTextEx(GetFontDefault(), text, fontSize, 1);
  DrawText(text, x - text_size.x / 2, y - text_size.y / 2, fontSize, color);
}

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Example Game");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawCenteredText("OMG! IT WORKS! (cache check)", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 50, BLACK);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
