#pragma once

#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>

void Sleep();					// 0.1초 쉼
void Sleep(int);				// 0.0n초 쉼;

void clearScreen();				// 터미널 지우기

void drawAlert();				// 조심하라는 말

void drawLine();				// 한 줄을 그림

void drawStart();				// 프로그램을 시작할 때

void drawEnd();					// 프로그램이 끝날 때

void drawInfo(int, int);		// 보유중인 도형의 정보를 출력할 때

void drawShape();				// 도형을 추가할 때

void drawIncreaseCapacity();	// 용량이 늘어날 때

int drawMenu();					// 메뉴판

int whatShape();				// 어떤 도형을 추가할 지 번호를 받을 때

int whatSetting();				// 어떤 설정을 고를 지 번호를 받을 때

void drawFinish();				// 프로그램 종료

std::string makePoint();		// 점을 얻을 때
	
double makeNumber();				// 길이를 얻을 때

int eraseNumOfShape();			// 도형을 지울 때
