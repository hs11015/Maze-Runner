




/*���� ���̵� C 10���� �ڵ��ѽñ�*/

#define _CRT_SECURE_NO_WARNINGS  // scanf warning ������
#include <Windows.h>    // �����찳���ڵ��� �ʿ��� ��� ��ũ�ο� �Լ� ����. �ܼ��� ��ġ ���� ����
#include <stdio.h>

void GotoXY(int x, int y)    // ���� ��� ��ġ�� �����ϴ� �Լ��� GoToXY �Լ������� �ۼ�
{
	COORD Pos;    // COORD��� ����ü�� ������Ͽ� ����Ǿ��ִ� x, y���� ������.
	Pos.X = x;    // ����ü��� ���� ������. ����ü�μ� x�� ����
	Pos.Y = y;    // ����ü��� ���� ������. ����ü�μ� y�� ����
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	// SetConsoleCursorPosition�� �ܼ��� �ڵ鰪(�ܼ��� ID)�� ��ǥ���� �޾� �ش� ��ġ�� �ܼ��� Ŀ���� �̵�.
	// GetStdHandlel(STD_OUTPUT_HANDLE)�� �ܼ� ID�� ���Ϲ��� �� �ִ� �Լ�
}

int main(void)
{
	int num, x = 0, y = 1;  // y�� 0���� �ϸ� ����� printf�� ���� ��µ�
	printf("�� ���� ����� ����Ͻðڽ��ϱ�? : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		GotoXY(x, y);    // �ܼ��� ��ǥ���� 5,1 �ű�
		printf("��\n");  // ��� ���
		x += 2;			 // x�� �� ĭ�� ����ֱ�
		y++;			 // y�� �� �پ� ����ֱ�
	}

	return 0;
}