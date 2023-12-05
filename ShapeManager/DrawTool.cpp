#include <iostream>
#include <chrono>
#include <thread>
#include "DrawTool.h"

void Sleep() 
{
	std::this_thread::sleep_for(std::chrono::microseconds(10000));
};

void Sleep(int n)
{
	std::this_thread::sleep_for(std::chrono::microseconds(n * 1000));
};

void writeLine(const char* str) {
	for (const char c : static_cast<std::string>(str)) {
		std::cout << c;
		Sleep();
	}
}

void drawAlert()
{
	std::cout << "시"; Sleep(); Sleep(); Sleep();
	std::cout << "각"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "에"; Sleep(); Sleep(); Sleep();
	std::cout << " "; Sleep(); Sleep();
	std::cout << "문"; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "제"; Sleep(); Sleep();
	std::cout << "가"; Sleep(); Sleep(); Sleep();
	std::cout << " "; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "있"; Sleep(); Sleep();
	std::cout << "으"; Sleep(); Sleep();
	std::cout << "신"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "가"; Sleep(); Sleep();
	std::cout << "요"; Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep(); Sleep(); 
	std::cout << "?"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep(); 
	std::cout << "?"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep(); Sleep(); 
	std::cout << "?"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "?"; Sleep(); Sleep(); 
	std::cout << "?"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
}

void drawLine()
{
	for (int i = 0; i < 50; ++i)
	{
		std::cout << "-";
		Sleep(1);
	}
	std::cout << '\n';
};

void drawStart()
{
	drawLine();
	Sleep();
	writeLine("프로그램 수행을 시작합니다...");
	std::cout << '\n';
	Sleep();
	drawLine();
	Sleep();
};

void drawEnd()
{
	drawLine();
	Sleep();
	std::cout << "수"; Sleep();
	std::cout << "행"; Sleep();
	std::cout << "을"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "완"; Sleep();
	std::cout << "료"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "였"; Sleep();
	std::cout << "습"; Sleep();
	std::cout << "니"; Sleep();
	std::cout << "다"; Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	drawLine();
	Sleep();
};

void drawInfo(int num, int cap)
{
	drawLine();
	Sleep();
	writeLine("보유중인 도형의 개수 : ");
	std::cout << num; Sleep();

	writeLine("개. 담을 수 있는 도형의 개수 : ");
	std::cout << cap; Sleep();

	writeLine("개.\n보유중인 도형의 정보를 출력합니다...");
	std::cout << '\n';
	drawLine();
	Sleep();
}

void drawShape()
{
	writeLine("도형 추가중...");
	std::cout << '\n';
	drawEnd();
}

void drawIncreaseCapacity()
{
	drawLine();
	Sleep();
	std::cout << "용"; Sleep();
	std::cout << "량"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "초"; Sleep();
	std::cout << "과"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "발"; Sleep();
	std::cout << "생"; Sleep();
	std::cout << "!"; Sleep(); Sleep();
	std::cout << "!"; Sleep(); Sleep(); Sleep();
	std::cout << "!"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	std::cout << "메"; Sleep();
	std::cout << "모"; Sleep();
	std::cout << "리"; Sleep();
	std::cout << "를"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "옮"; Sleep();
	std::cout << "기"; Sleep();
	std::cout << "는"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "중"; Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	std::cout << "이"; Sleep();
	std::cout << "전"; Sleep();
	std::cout << "을"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "완"; Sleep();
	std::cout << "료"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "였"; Sleep();
	std::cout << "습"; Sleep();
	std::cout << "니"; Sleep();
	std::cout << "다"; Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	drawLine();
	Sleep();
}

// 1. 도형추가 2. 도형그리기 3. 도형제거 4. 종료
int drawMenu()
{
	std::cout << "원"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "시"; Sleep();
	std::cout << "는"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "메"; Sleep();
	std::cout << "뉴"; Sleep();
	std::cout << "의"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "번"; Sleep();
	std::cout << "호"; Sleep();
	std::cout << "를"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "입"; Sleep();
	std::cout << "력"; Sleep();
	std::cout << "해"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "주"; Sleep();
	std::cout << "세"; Sleep();
	std::cout << "요"; Sleep();
	std::cout << "."; Sleep();
	std::cout << '\n';
	std::cout << "["; Sleep();
	std::cout << "1"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "도"; Sleep();
	std::cout << "형"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "추"; Sleep();
	std::cout << "가"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "기"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "2"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "전"; Sleep();
	std::cout << "체"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "도"; Sleep();
	std::cout << "형"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "그"; Sleep();
	std::cout << "리"; Sleep();
	std::cout << "기"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "3"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "도"; Sleep();
	std::cout << "형"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "제"; Sleep();
	std::cout << "거"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "기"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "4"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "프"; Sleep();
	std::cout << "로"; Sleep();
	std::cout << "그"; Sleep();
	std::cout << "램"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "종"; Sleep();
	std::cout << "료"; Sleep();
	std::cout << "\n"; Sleep();
	drawLine();
	std::cout << "번"; Sleep();
	std::cout << "호"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	int in;
	std::cin >> in;
	drawLine();
	return in;
}

// 1. 원		2. 선분		3. 삼각형	4. 직사각형
int whatShape()
{
	std::cout << "어"; Sleep();
	std::cout << "떤"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "도"; Sleep();
	std::cout << "형"; Sleep();
	std::cout << "을"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "추"; Sleep();
	std::cout << "가"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "시"; Sleep();
	std::cout << "겠"; Sleep();
	std::cout << "습"; Sleep();
	std::cout << "니"; Sleep();
	std::cout << "까"; Sleep();
	std::cout << "?"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "1"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << ' ';
	std::cout << "원"; Sleep();
	std::cout << "\n\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "2"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "선"; Sleep();
	std::cout << "분"; Sleep();
	std::cout << "\n\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "3"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "삼"; Sleep();
	std::cout << "각"; Sleep();
	std::cout << "형"; Sleep();
	std::cout << "\n\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "4"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "직"; Sleep();
	std::cout << "사"; Sleep();
	std::cout << "각"; Sleep();
	std::cout << "형"; Sleep();
	std::cout << "\n"; Sleep();
	drawLine();
	std::cout << "번"; Sleep();
	std::cout << "호"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();

	int in;
	std::cin >> in;
	drawLine();
	return in;
}

void drawFinish()
{
	std::cout << "프"; Sleep();
	std::cout << "로"; Sleep();
	std::cout << "그"; Sleep();
	std::cout << "램"; Sleep();
	std::cout << "을"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "종"; Sleep();
	std::cout << "료"; Sleep();
	std::cout << "하"; Sleep();
	std::cout << "겠"; Sleep();
	std::cout << "습"; Sleep();
	std::cout << "니"; Sleep();
	std::cout << "다"; Sleep();
	std::cout << "."; Sleep(100);
}

std::string& makePoint()
{
	drawLine();
	Sleep();
	std::cout << "점"; Sleep();
	std::cout << "을"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "입"; Sleep();
	std::cout << "력"; Sleep();
	std::cout << "해"; Sleep();
	std::cout << "주"; Sleep();
	std::cout << "세"; Sleep();
	std::cout << "요"; Sleep();
	std::cout << "."; Sleep();
	std::cout << " "; Sleep();
	std::cout << "("; Sleep();
	std::cout << "예"; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "3"; Sleep();
	std::cout << ","; Sleep();
	std::cout << " "; Sleep();
	std::cout << "3"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ")"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "입"; Sleep();
	std::cout << "력"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	std::string tmp;
	std::cin >> tmp;
	drawLine();
	return tmp;
}

std::string& makeNumber()
{
	drawLine();
	Sleep();
	std::cout << "길"; Sleep();
	std::cout << "이"; Sleep();
	std::cout << "를"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "입"; Sleep();
	std::cout << "력"; Sleep();
	std::cout << "해"; Sleep();
	std::cout << "주"; Sleep();
	std::cout << "세"; Sleep();
	std::cout << "요"; Sleep();
	std::cout << "."; Sleep();
	std::cout << " "; Sleep();
	std::cout << "("; Sleep();
	std::cout << "예"; Sleep();
	std::cout << ":"; Sleep();
	std::cout << "14"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ")"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "입"; Sleep();
	std::cout << "력"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	std::string tmp;
	std::cin >> tmp;
	drawLine();
	return tmp;
}
