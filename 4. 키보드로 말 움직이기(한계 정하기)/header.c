// header.c

#include "header.h"

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void move_pointer()
{
	int nkey, x = 5, y = 2, move_x = 0, move_y = 0;

	while (1)
	{
		GotoXY(x, y);
		printf("��");

		if (_kbhit())
		{
			nkey = _getch();

			if (nkey == ARROW)     // ����Ű�� �Է��� ���
			{
				nkey = _getch();   // �� ���� �Էµ�
				switch (nkey)
				{
				case UP:   // 72
					move_y = -2;
					x += 0;
					y += move_y;

				case DOWN:   // 80
					move_y = 1;
					x += 1;
					y += move_y;

				case LEFT:   // 75
					move_x = -2;
					x += move_x;
					y += 0;

				case RIGHT:  // 77
					move_x = 1;
					x += move_x;
					y += 0;
				}
			}

			//if (nkey != ARROW)

		}

		Sleep(10);    // 10ms(�и�������) ����. ������ ������� ���� ����
		system("cls");   // �ý��� ����� ������. cls�� �ܼ� ȭ�� �ʱ�ȭ ����� �̾߱���
		// cls �ܿ��� pause�� Ű�� �Է��ϸ� ��� ����, notepad�� �޸��� ���α׷� ����
	}
}




