




/*모각코 아이두 C 10일차 코딩뿌시기*/

#define _CRT_SECURE_NO_WARNINGS  // scanf warning 없애줌
#include <Windows.h>    // 윈도우개발자들이 필요한 모든 매크로와 함수 포함. 콘솔의 위치 지정 가능
#include <stdio.h>

void GotoXY(int x, int y)    // 보통 출력 위치를 변경하는 함수는 GoToXY 함수명으로 작성
{
	COORD Pos;    // COORD라는 구조체는 헤더파일에 선언되어있는 x, y값을 저장함.
	Pos.X = x;    // 구조체라는 것을 보여줌. 구조체로서 x값 저장
	Pos.Y = y;    // 구조체라는 것을 보여줌. 구조체로서 y값 저장
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	// SetConsoleCursorPosition은 콘솔의 핸들값(콘솔의 ID)과 좌표값을 받아 해당 위치로 콘솔의 커서가 이동.
	// GetStdHandlel(STD_OUTPUT_HANDLE)은 콘솔 ID를 리턴받을 수 있는 함수
}

int main(void)
{
	int num, x = 0, y = 1;  // y를 0으로 하면 계단이 printf문 위에 출력됨
	printf("몇 개의 계단을 출력하시겠습니까? : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		GotoXY(x, y);    // 콘솔의 좌표값을 5,1 옮김
		printf("ㄱ\n");  // 계단 출력
		x += 2;			 // x는 두 칸씩 띄워주기
		y++;			 // y는 한 줄씩 띄워주기
	}

	return 0;
}

