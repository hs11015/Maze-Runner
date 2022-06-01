//header.h

#pragma once
#ifndef HEADER
#define HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>	// 시간 함수

#define SIZE 19		// Maze의 크기
#define XP 40
#define YP 5
#define LEFT 75		// 왼쪽 방향키
#define RIGHT 77	// 오른쪽 방향키
#define UP 72		// 위 방향키
#define DOWN 80		// 아래 방향키
#define ARROW 224	// 방향키 고유값

clock_t start, end;	// 시작, 종료 시간
float res;		// 전역변수?

void LoadMaze(char num);		// Maze 불러오기
void GotoXY(int x, int y);		// 포인터 위치 옮기기
void PrintMazeGame();			// Maze 출력하기
void CursorView(char show);		// 커서 없애기
void MoveMaze(int* row, int* col);	// 플레이어 움직이기
int IsBlock(int i, int j);		// 막힌 부분 표시하기
int IsFinish(int i, int j);		// 종료되는 부분 표시하기
void Complete();				// 끝난 후 메세지 출력

char maze[SIZE][SIZE];		// SIZExSIZE 크기의 Maze

#endif
