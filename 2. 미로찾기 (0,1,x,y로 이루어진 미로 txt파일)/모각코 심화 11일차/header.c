#include "header.h"   // 선언해놓은 header파일. 원하는 함수 정의하기

void LoadMaze(char num)
{
	char path[20] = "./Maze";
	strcat(path, &num);   // 프로젝트 파일 이름 Maze에 숫자 합침
	strcat(path, ".txt");   // .txt 확장자명을 합쳐줌

	char str_tmp[50] = { 0 };  // str_tmp 배열 초기화
	FILE* f = fopen(&path, "r"); // fopen함수로 파일을 열고 파일 포인터를 리턴 받음.
	// <stdio.h> 헤더파일에 정의되어 있는 fopen 함수를 이용.
	// path라는 파일 경로를 탐색해서 "r"(읽기모드)로 파일 열기. 이때 파일 포인터는 *f

	for (int i = 0; i < SIZE; i++)
	{
		fgets(str_tmp, 50, f);  // 문자열 함수에서 배운 gets_s와 비슷한 함수.
		// 최대 크기가 50 이하인 문자를 f로부터 읽어서 str_tmp에 저장.

		char* ptr = strtok(str_tmp, "\t"); // 문자열 str_tmp를 \t을 기준으로 잘라서 반환
		// string에 NULL을 넣고 실행하면 전에 자르고 남은 문자열을 다시 \t로 잘라서 반환

		for (int j = 0; j < SIZE; j++)
		{
			maze[i][j] = *ptr;
			ptr = strtok(NULL, "\t");
		}
	}
	fclose(f);    // 파일 닫기
}

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}