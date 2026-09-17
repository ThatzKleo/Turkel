
#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "../include/raygui.h"

#define BACK_COLOR (Color){ 50, 44, 59, 255 }
#define UI_COLOR (Color){ 35, 31, 41, 255 }


int main(){
    int window_width = 1280; int window_height = 720;
    char* version = "0.0.1";

    // GUI Style
    GuiSetStyle(DEFAULT, BACKGROUND_COLOR, ColorToInt(UI_COLOR));

    // Left Panel
    Rectangle left_panel = {0, 0, window_width * 0.2, window_height};

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(window_width, window_height, TextFormat("Turkel Hub %sv", version));
    SetWindowMinSize(1280, 720);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BACK_COLOR);
        GuiPanel(left_panel, "");

        EndDrawing();
    }

    return 0;
}