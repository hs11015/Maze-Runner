// main.c

#include "header.h"

int main(void)
{
    int row = 2, col = 1;
    char level;
    CursorView(0);

    GotoXY(XP, YP - 3);
    printf("미로 찾기 게임\n");
    GotoXY(XP, YP - 2);
    printf("시작하려면 1을 입력해주세요 : ");
    scanf("%c", &level);

    LoadMaze(level);

    while (1)
    {
        PrintMazeGame();
        MoveMaze(&row, &col);
    }

    return 0;
}