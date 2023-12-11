#pragma once

#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>

void Sleep();					// 0.1�� ��
void Sleep(int);				// 0.0n�� ��;

void clearScreen();				// �͹̳� �����

void drawAlert();				// �����϶�� ��

void drawLine();				// �� ���� �׸�

void drawStart();				// ���α׷��� ������ ��

void drawEnd();					// ���α׷��� ���� ��

void drawInfo(int, int);		// �������� ������ ������ ����� ��

void drawShape();				// ������ �߰��� ��

void drawIncreaseCapacity();	// �뷮�� �þ ��

int drawMenu();					// �޴���

int whatShape();				// � ������ �߰��� �� ��ȣ�� ���� ��

int whatSetting();				// � ������ �� �� ��ȣ�� ���� ��

void drawFinish();				// ���α׷� ����

std::string makePoint();		// ���� ���� ��
	
double makeNumber();				// ���̸� ���� ��

int eraseNumOfShape();			// ������ ���� ��
