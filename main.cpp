#include <cmath>

#include <raylib.h>

#define FPS 60

#define window_width 1366
#define window_height 700
#define window_title "collision"
Color window_color = BLACK;

#include "player.hpp"

int main(int argc, char const *argv[]) {
	SetTargetFPS(FPS);

	InitWindow(window_width, window_height, window_title);

	Player player;

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(window_color);

		player.draw();
		player.move();
		player.collision();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}