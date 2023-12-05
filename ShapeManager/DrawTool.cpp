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
	std::cout << "��"; Sleep(); Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep(); Sleep();
	std::cout << " "; Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep(); Sleep();
	std::cout << " "; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep();
	std::cout << "��"; Sleep(); Sleep();
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
	writeLine("���α׷� ������ �����մϴ�...");
	std::cout << '\n';
	Sleep();
	drawLine();
	Sleep();
};

void drawEnd()
{
	drawLine();
	Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
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
	writeLine("�������� ������ ���� : ");
	std::cout << num; Sleep();

	writeLine("��. ���� �� �ִ� ������ ���� : ");
	std::cout << cap; Sleep();

	writeLine("��.\n�������� ������ ������ ����մϴ�...");
	std::cout << '\n';
	drawLine();
	Sleep();
}

void drawShape()
{
	writeLine("���� �߰���...");
	std::cout << '\n';
	drawEnd();
}

void drawIncreaseCapacity()
{
	drawLine();
	Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "!"; Sleep(); Sleep();
	std::cout << "!"; Sleep(); Sleep(); Sleep();
	std::cout << "!"; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << "."; Sleep(); Sleep(); Sleep(); Sleep(); Sleep();
	std::cout << '\n';
	drawLine();
	Sleep();
}

// 1. �����߰� 2. �����׸��� 3. �������� 4. ����
int drawMenu()
{
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "ȣ"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "."; Sleep();
	std::cout << '\n';
	std::cout << "["; Sleep();
	std::cout << "1"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "2"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "ü"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "3"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "4"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n"; Sleep();
	drawLine();
	std::cout << "��"; Sleep();
	std::cout << "ȣ"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	int in;
	std::cin >> in;
	drawLine();
	return in;
}

// 1. ��		2. ����		3. �ﰢ��	4. ���簢��
int whatShape()
{
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "?"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "1"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << ' ';
	std::cout << "��"; Sleep();
	std::cout << "\n\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "2"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "3"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n\t"; Sleep();
	std::cout << "["; Sleep();
	std::cout << "4"; Sleep();
	std::cout << "]"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "\n"; Sleep();
	drawLine();
	std::cout << "��"; Sleep();
	std::cout << "ȣ"; Sleep();
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
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "."; Sleep(100);
}

std::string& makePoint()
{
	drawLine();
	Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "."; Sleep();
	std::cout << " "; Sleep();
	std::cout << "("; Sleep();
	std::cout << "��"; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "3"; Sleep();
	std::cout << ","; Sleep();
	std::cout << " "; Sleep();
	std::cout << "3"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ")"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
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
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "."; Sleep();
	std::cout << " "; Sleep();
	std::cout << "("; Sleep();
	std::cout << "��"; Sleep();
	std::cout << ":"; Sleep();
	std::cout << "14"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ")"; Sleep();
	std::cout << "\n"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << "��"; Sleep();
	std::cout << " "; Sleep();
	std::cout << ":"; Sleep();
	std::cout << " "; Sleep();
	std::string tmp;
	std::cin >> tmp;
	drawLine();
	return tmp;
}
