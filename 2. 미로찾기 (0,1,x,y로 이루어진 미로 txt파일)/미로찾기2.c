#include "header.h"

int main(void)
{
    char level;
    printf("난이도를 선택하세요. (1, 2, 3) 中 택 1 : ");
    scanf("%c", &level);     // 주신 txt파일에 1,2,3단계까지 있어서
    LoadMaze(level);

    printf("\n선택하신 단계의 미로를 출력하겠습니다!\n\n");


    for (int i = 0; i < SIZE; i++)
    {
        GotoXY(20, i + 5);
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }

    printf("\n출력을 완료했습니다.\n");

    return 0;
}
