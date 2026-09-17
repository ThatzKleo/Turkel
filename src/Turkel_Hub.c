
#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "../include/raygui.h"

#define BACK_COLOR (Color){ 50, 44, 59, 255 }
#define UI_BACK_COLOR (Color){ 35, 31, 41, 255 }
#define UI_BORDER_COLOR (Color){ 67, 50, 92, 255 }



int main(){
    int window_width = 1280; int window_height = 720;
    char* version = "0.0.1";

    // Left Panel
    Rectangle left_panel_back = {0, 0, window_width * 0.2, window_height};
    Rectangle left_panel_header = {0, 0, window_width * 0.2, 50};

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(window_width, window_height, TextFormat("Turkel Hub %sv", version));
    SetWindowMinSize(1280, 720);

    // Font Load
    Font main_font = LoadFontEx("resources/Michroma-Regular.ttf", 34, NULL, 0);
    SetTextureFilter(main_font.texture, TEXTURE_FILTER_BILINEAR);

    // GUI Style
    

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BACK_COLOR);
        GuiDrawRectangle(left_panel_back, 3, UI_BORDER_COLOR, UI_BACK_COLOR );
        GuiDrawRectangle(left_panel_header, 3, UI_BORDER_COLOR, UI_BACK_COLOR );

        EndDrawing();
    }
    UnloadFont(main_font);
    return 0;
}