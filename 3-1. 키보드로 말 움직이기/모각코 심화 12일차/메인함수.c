// �̷�ã��3... �����Լ�.c 

#include "header.h"


int main(void)
{
    char level;
    CursorView(0);

    GotoXY(XP, YP - 3);
    printf("�̷� ã�� ����\n");
    GotoXY(XP, YP - 2);
    printf("���̵��� �����ϼ���. (1, 2, 3) �� �� 1 : ");
    scanf("%c", &level);

    LoadMaze(level);

    printf("\n�����Ͻ� �ܰ��� �̷θ� ����ϰڽ��ϴ�!\n\n");

    while (1)
    {
        PrintMazeGame();
    }
    

    /* for�� ��� while������ ���
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

    printf("\n����� �Ϸ��߽��ϴ�.\n");

    return 0;
}