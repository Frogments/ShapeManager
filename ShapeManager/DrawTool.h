#ifndef _DrawTool
#define _DrawTool

#include <string>

void Sleep();		// 0.1초 쉼
void Sleep(int);	// 0.0n초 쉼;

void drawAlert();

void drawLine();	// 한 줄을 그림

void drawStart();	// 프로그램을 시작할 때

void drawEnd();		// 프로그램이 끝날 때

void drawInfo(int, int);	// 보유중인 도형의 정보를 출력할 때

void drawShape();	// 도형을 추가할 때

void drawIncreaseCapacity(); // 용량이 늘어날 때

int drawMenu();		// 메뉴판

int whatShape();	// 어떤 도형을 추가할 지 번호를 받을 때

void drawFinish();	// 프로그램 종료

std::string& makePoint();

std::string& makeNumber();

#endif // !_DrawTool
