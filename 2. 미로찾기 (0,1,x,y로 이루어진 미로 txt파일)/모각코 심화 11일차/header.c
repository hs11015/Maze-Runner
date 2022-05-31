#include "header.h"   // �����س��� header����. ���ϴ� �Լ� �����ϱ�

void LoadMaze(char num)
{
	char path[20] = "./Maze";
	strcat(path, &num);   // ������Ʈ ���� �̸� Maze�� ���� ��ħ
	strcat(path, ".txt");   // .txt Ȯ���ڸ��� ������

	char str_tmp[50] = { 0 };  // str_tmp �迭 �ʱ�ȭ
	FILE* f = fopen(&path, "r"); // fopen�Լ��� ������ ���� ���� �����͸� ���� ����.
	// <stdio.h> ������Ͽ� ���ǵǾ� �ִ� fopen �Լ��� �̿�.
	// path��� ���� ��θ� Ž���ؼ� "r"(�б���)�� ���� ����. �̶� ���� �����ʹ� *f

	for (int i = 0; i < SIZE; i++)
	{
		fgets(str_tmp, 50, f);  // ���ڿ� �Լ����� ��� gets_s�� ����� �Լ�.
		// �ִ� ũ�Ⱑ 50 ������ ���ڸ� f�κ��� �о str_tmp�� ����.

		char* ptr = strtok(str_tmp, "\t"); // ���ڿ� str_tmp�� \t�� �������� �߶� ��ȯ
		// string�� NULL�� �ְ� �����ϸ� ���� �ڸ��� ���� ���ڿ��� �ٽ� \t�� �߶� ��ȯ

		for (int j = 0; j < SIZE; j++)
		{
			maze[i][j] = *ptr;
			ptr = strtok(NULL, "\t");
		}
	}
	fclose(f);    // ���� �ݱ�
}

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}