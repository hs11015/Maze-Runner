#include "header.h"

int main(void)
{
    char level;
    printf("���̵��� �����ϼ���. (1, 2, 3) �� �� 1 : ");
    scanf("%c", &level);     // �ֽ� txt���Ͽ� 1,2,3�ܰ���� �־
    LoadMaze(level);

    printf("\n�����Ͻ� �ܰ��� �̷θ� ����ϰڽ��ϴ�!\n\n");


    for (int i = 0; i < SIZE; i++)
    {
        GotoXY(20, i + 5);
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }

    printf("\n����� �Ϸ��߽��ϴ�.\n");

    return 0;
}