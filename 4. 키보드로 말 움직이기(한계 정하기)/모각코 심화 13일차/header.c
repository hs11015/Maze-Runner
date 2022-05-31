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
		printf("□");

		if (_kbhit())
		{
			nkey = _getch();

			if (nkey == ARROW)     // 방향키를 입력한 경우
			{
				nkey = _getch();   // 두 번씩 입력됨
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

		Sleep(10);    // 10ms(밀리세컨드) 정지. 윈도우 헤더파일 내에 있음
		system("cls");   // 시스템 명령을 수행함. cls는 콘솔 화면 초기화 명령을 이야기함
		// cls 외에도 pause는 키를 입력하면 계속 진행, notepad는 메모장 프로그램 실행
	}
}




