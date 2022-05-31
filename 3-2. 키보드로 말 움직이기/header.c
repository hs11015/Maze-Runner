// header.c

#include "header.h"

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show) {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}
void move_output() {
	int y = 0, move = 0;
	while (1) {
		GotoXY(XP, y);
		printf("□");

		if (y == YP)   // YP는 헤더파일에서 5라고 정의했었음
		{
			move = -1;
		}
		else if (y == 0)
		{
			move = 1;
		}
		y += move;
		Sleep(10);    // 10ms(밀리세컨드) 정지. 윈도우 헤더파일 내에 있음
		system("cls");   // 시스템 명령을 수행함. cls는 콘솔 화면 초기화 명령을 이야기함
		// cls 외에도 pause는 키를 입력하면 계속 진행, notepad는 메모장 프로그램 실행
	}
}