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
		printf("��");

		if (y == YP)   // YP�� ������Ͽ��� 5��� �����߾���
		{
			move = -1;
		}
		else if (y == 0)
		{
			move = 1;
		}
		y += move;
		Sleep(10);    // 10ms(�и�������) ����. ������ ������� ���� ����
		system("cls");   // �ý��� ����� ������. cls�� �ܼ� ȭ�� �ʱ�ȭ ����� �̾߱���
		// cls �ܿ��� pause�� Ű�� �Է��ϸ� ��� ����, notepad�� �޸��� ���α׷� ����
	}
}