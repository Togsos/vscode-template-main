#include "raylib.h"
#include <stdio.h>

int main()

{
   const int screenWidth {800};
   const int screenHeight {750};
   char WindowName[] = "Plague Doctor";
   
InitWindow(screenWidth, screenHeight, WindowName);
  const char msg[50] = "Merrie Olde England 1349...";
   Font font = LoadFont("resources/custom_alagard.png");   
   Vector2 fontPosition = { screenWidth/2.0f - MeasureTextEx
   (font, msg, (float)font.baseSize, -3).x/2,screenHeight/2.0f - font.baseSize/2.0f - 80.0f };

SetTargetFPS(60);

while(WindowShouldClose() == false)

{
BeginDrawing();
   ClearBackground(WHITE);
   DrawTextEx(font, msg, fontPosition, (float)font.baseSize, -3, RED);
EndDrawing();
} 
UnloadFont(font);

return 0;
}



