#include "DrawTool.h"

// 터미널을 잠시 멈춤
void Sleep() 
{
	std::this_thread::sleep_for(std::chrono::microseconds(1000));
};
void Sleep(int n)
{
	std::this_thread::sleep_for(std::chrono::microseconds(n * 1000));
};

// 선을 하나 그어줌
void drawLine()
{
	for (int i = 0; i < 50; ++i)
	{
		std::cout << "-";
		//Sleep(1);
	}
	std::cout << '\n';
	Sleep(200);
};

// 입력받은 문장을 출력함
void writeLine(const char* str) {
	for (const char c : static_cast<std::string>(str)) {
		std::cout << c;
		//Sleep();
	}
}

// 터미널을 깨끗이 함
void clearScreen() {
	writeLine("터미널을 깨끗이 하겠습니다...\n");
	drawLine();
	Sleep(1000);
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { 0, 0 };
	DWORD count;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hStdOut, &csbi);
	FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
	SetConsoleCursorPosition(hStdOut, coord);
}

// 경고 출력
void drawAlert()
{
	writeLine("시각에 문제가 있으신가요?????\n");
	drawLine();
	Sleep(200);
}

// 시작 출력
void drawStart()
{
	drawLine();
	Sleep();
	writeLine("프로그램 수행을 시작합니다...\n");
	drawLine();
	Sleep(200);
};

// 끝 출력
void drawEnd()
{
	writeLine("수행을 완료하였습니다...\n");
	drawLine();
	Sleep(200);
};

// 도형의 정보 출력
void drawInfo(int num, int cap)
{
	writeLine("보유중인 도형의 개수 : ");
	std::cout << num; Sleep();

	writeLine("개. 담을 수 있는 도형의 개수 : ");
	std::cout << cap; Sleep();

	writeLine("개.\n보유중인 도형의 정보를 출력합니다...\n");
	drawLine();
	Sleep(200);
}

// 도형 추가중 출력
void drawShape()
{
	writeLine("도형 추가중...\n");
}

// 용량 추가중 출력
void drawIncreaseCapacity()
{
	drawLine();
	Sleep();
	// 용량 초과 발생!!! 메모리를 옮기는 중... 이전을 완료하였습니다...
	writeLine("용량 초과 발생!!!\n 메모리를 옮기는 중...\n이전을 완료하였습니다...\n");
}

// 1. 도형추가 2. 도형그리기 3. 도형제거 4. 종료
int drawMenu()
{
	writeLine("원하시는 메뉴의 번호를 입력해주세요.\n");
	writeLine("\t[1] 도형 추가하기\n"); 
	writeLine("\t[2] 도형 제거하기\n"); 
	writeLine("\t[3] 도형 그리기\n"); 
	writeLine("\t[4] 도형 복사하기\n"); 
	writeLine("\t[5] 프로그램 종료\n");
	writeLine("\t[6] 설정\n");
	drawLine();
	writeLine("번호 :");

	int in;
	std::cin >> in;
	drawLine();
	return in;
}

// 1. 원		2. 선분		3. 삼각형	4. 직사각형
int whatShape()
{
	writeLine("어떤 도형을 추가하시겠습니까?\n\t[1] 원\n\t[2] 선분\n\t[3] 삼각형\n\t[4] 직사각형\n");
	drawLine();
	writeLine("번호 :");

	int in;
	std::cin >> in;
	drawLine();
	return in;
}

// 1. 도형 저장  2. 도형 불러오기
int whatSetting() {
	int cin;
	writeLine("\t[1] - 도형 저장하기\n");
	writeLine("\t[2] - 도형 불러오기\n");
	writeLine("번호 : ");
	std::cin >> cin;
	return cin;
}

// 프로그램 종료 출력
void drawFinish()
{
	writeLine("프로그램을 종료하겠습니다.\n");
}

// string 하나 받아서 반환
std::string makePoint()
{
	drawLine();
	Sleep();
	writeLine("점을 입력해주세요. ( 예: 3,3 )\n입력 :");

	std::string tmp;
	std::cin >> tmp;
	drawLine();
	Sleep(200);
	return tmp;
}

// int 하나 받아서 반환
double makeNumber()
{
	drawLine();
	Sleep();
	writeLine("길이를 입력해주세요. ( 예: 14 )\n입력 :");

	double tmp;
	std::cin >> tmp;
	drawLine();
	return tmp;
}

// (특수) 지울 도형의 번호 받는 용도
int eraseNumOfShape()
{
	writeLine("지울 도형의 번호를 입력해주세요.\n입력 :");
	int n;
	std::cin >> n;
	return n;
}
