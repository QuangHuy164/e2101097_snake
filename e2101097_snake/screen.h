#pragma once
enum COLORS { BLACK = 30, RED, GREEN, YELLOW, BLUE, MANGETA, CYAN, WHITE };

void resetColors(void);
void clearScreen(void);
void setBackground(int color);
void gotoXY(int x, int y);
