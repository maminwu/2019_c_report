#include "main.h"

#define UNICODE

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef KEY_CODE
#define KEY_CODE

// 키 보 드 값
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

#endif


int keyControl();
void titleDraw(void); //타이틀//
int menuDraw(void); //메인메뉴
void Help();
int new_name(int x, int y);
void viewlog(); // 점수 보기 함수
void skull(int skullnum);