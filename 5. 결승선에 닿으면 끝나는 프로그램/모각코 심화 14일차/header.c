// header.c
#include "header.h"

void LoadMaze(char num)
{
    char path[20] = "./Map";
    strcat(path, &num);
    strcat(path, ".txt");

    char str_tmp[50] = { 0, };
    FILE* f = fopen(&path, "r");

    for (int i = 0; i < SIZE; i++)
    {
        fgets(str_tmp, 50, f);
        char* ptr = strtok(str_tmp, "\t");
        for (int j = 0; j < SIZE; j++)
        {
            maze[i][j] = *ptr;
            ptr = strtok(NULL, "\t");
        }
    }
    fclose(f);
}

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void PrintMazeGame()
{

    for (int i = 0; i < SIZE; i++)
    {
        GotoXY(XP, YP + i);
        for (int j = 0; j < SIZE; j++)
        {
            if (maze[i][j] == '1')
                printf("■");
            else if (maze[i][j] == 'y')
                printf("ㅣ결승선ㅣ");
            else if (maze[i][j] == '0')
                printf("□");
            else  // maze[i][j] == 'x'
                printf("●");
        }
        puts("");
    }
}

void CursorView(char show)
{
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void MoveMaze(int* row, int* col)
{
    int nkey;

    if (_kbhit())
    {
        nkey = _getch();

        if (nkey == 224)
        {
            nkey = _getch();
            switch (nkey)
            {
            case UP:        // 72
                if (!(IsBlock(*row - 1, *col)))    // 위쪽이 막히지 않았다면
                {
                    maze[*row][*col] = '0';    // 길 □
                    maze[*row - 1][*col] = 'x';    // 사용자 ●
                    *row -= 1;
                }
                else if (IsFinish(*row - 1, *col))    // 위쪽이 종료되는 부분이라면
                {
                    exit(0);    // 임시로 강제종료
                }
                break;

            case DOWN:      // 80
                if (!(IsBlock(*row + 1, *col)))
                {
                    maze[*row][*col] = '0';
                    maze[*row + 1][*col] = 'x';
                    *row += 1;
                }
                else if (IsFinish(*row + 1, *col))
                {
                    exit(0);
                }
                break;

            case LEFT:      // 75
                if (!(IsBlock(*row, *col - 1)))
                {
                    maze[*row][*col] = '0';
                    maze[*row][*col - 1] = 'x';
                    *col -= 1;
                }
                else if (IsFinish(*row, *col - 1))
                {
                    exit(0);
                }
                break;

            case RIGHT:     // 77
                if (!(IsBlock(*row, *col + 1)))
                {
                    maze[*row][*col] = '0';
                    maze[*row][*col + 1] = 'x';
                    *col += 1;
                }
                else if (IsFinish(*row, *col + 1))
                {
                    exit(0);
                }
                break;
            }
        }
    }
}

int IsBlock(int i, int j)
{

    if (maze[i][j] == '1' || maze[i][j] == 'y')
        return 1;
    else
        return 0;
}

int IsFinish(int i, int j)
{

    if (maze[i][j] == 'y')
        return 1;
    else
        return 0;
}
