// 미로찾기3... 메인함수.c 

#include "header.h"


int main(void)
{
    char level;
    CursorView(0);

    GotoXY(XP, YP - 3);
    printf("미로 찾기 게임\n");
    GotoXY(XP, YP - 2);
    printf("난이도를 선택하세요. (1, 2, 3) 中 택 1 : ");
    scanf("%c", &level);

    LoadMaze(level);

    printf("\n선택하신 단계의 미로를 출력하겠습니다!\n\n");

    while (1)
    {
        PrintMazeGame();
    }
    

    /* for문 대신 while문으로 출력
    for (int i = 0; i < SIZE; i++)
    {
        GotoXY(20, i + 5);
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    */

    printf("\n출력을 완료했습니다.\n");

    return 0;
}