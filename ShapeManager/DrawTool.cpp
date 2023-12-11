#include "DrawTool.h"

// �͹̳��� ��� ����
void Sleep() 
{
	std::this_thread::sleep_for(std::chrono::microseconds(1000));
};
void Sleep(int n)
{
	std::this_thread::sleep_for(std::chrono::microseconds(n * 1000));
};

// ���� �ϳ� �׾���
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

// �Է¹��� ������ �����
void writeLine(const char* str) {
	for (const char c : static_cast<std::string>(str)) {
		std::cout << c;
		//Sleep();
	}
}

// �͹̳��� ������ ��
void clearScreen() {
	writeLine("�͹̳��� ������ �ϰڽ��ϴ�...\n");
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

// ��� ���
void drawAlert()
{
	writeLine("�ð��� ������ �����Ű���?????\n");
	drawLine();
	Sleep(200);
}

// ���� ���
void drawStart()
{
	drawLine();
	Sleep();
	writeLine("���α׷� ������ �����մϴ�...\n");
	drawLine();
	Sleep(200);
};

// �� ���
void drawEnd()
{
	writeLine("������ �Ϸ��Ͽ����ϴ�...\n");
	drawLine();
	Sleep(200);
};

// ������ ���� ���
void drawInfo(int num, int cap)
{
	writeLine("�������� ������ ���� : ");
	std::cout << num; Sleep();

	writeLine("��. ���� �� �ִ� ������ ���� : ");
	std::cout << cap; Sleep();

	writeLine("��.\n�������� ������ ������ ����մϴ�...\n");
	drawLine();
	Sleep(200);
}

// ���� �߰��� ���
void drawShape()
{
	writeLine("���� �߰���...\n");
}

// �뷮 �߰��� ���
void drawIncreaseCapacity()
{
	drawLine();
	Sleep();
	// �뷮 �ʰ� �߻�!!! �޸𸮸� �ű�� ��... ������ �Ϸ��Ͽ����ϴ�...
	writeLine("�뷮 �ʰ� �߻�!!!\n �޸𸮸� �ű�� ��...\n������ �Ϸ��Ͽ����ϴ�...\n");
}

// 1. �����߰� 2. �����׸��� 3. �������� 4. ����
int drawMenu()
{
	writeLine("���Ͻô� �޴��� ��ȣ�� �Է����ּ���.\n");
	writeLine("\t[1] ���� �߰��ϱ�\n"); 
	writeLine("\t[2] ���� �����ϱ�\n"); 
	writeLine("\t[3] ���� �׸���\n"); 
	writeLine("\t[4] ���� �����ϱ�\n"); 
	writeLine("\t[5] ���α׷� ����\n");
	writeLine("\t[6] ����\n");
	drawLine();
	writeLine("��ȣ :");

	int in;
	std::cin >> in;
	drawLine();
	return in;
}

// 1. ��		2. ����		3. �ﰢ��	4. ���簢��
int whatShape()
{
	writeLine("� ������ �߰��Ͻðڽ��ϱ�?\n\t[1] ��\n\t[2] ����\n\t[3] �ﰢ��\n\t[4] ���簢��\n");
	drawLine();
	writeLine("��ȣ :");

	int in;
	std::cin >> in;
	drawLine();
	return in;
}

// 1. ���� ����  2. ���� �ҷ�����
int whatSetting() {
	int cin;
	writeLine("\t[1] - ���� �����ϱ�\n");
	writeLine("\t[2] - ���� �ҷ�����\n");
	writeLine("��ȣ : ");
	std::cin >> cin;
	return cin;
}

// ���α׷� ���� ���
void drawFinish()
{
	writeLine("���α׷��� �����ϰڽ��ϴ�.\n");
}

// string �ϳ� �޾Ƽ� ��ȯ
std::string makePoint()
{
	drawLine();
	Sleep();
	writeLine("���� �Է����ּ���. ( ��: 3,3 )\n�Է� :");

	std::string tmp;
	std::cin >> tmp;
	drawLine();
	Sleep(200);
	return tmp;
}

// int �ϳ� �޾Ƽ� ��ȯ
double makeNumber()
{
	drawLine();
	Sleep();
	writeLine("���̸� �Է����ּ���. ( ��: 14 )\n�Է� :");

	double tmp;
	std::cin >> tmp;
	drawLine();
	return tmp;
}

// (Ư��) ���� ������ ��ȣ �޴� �뵵
int eraseNumOfShape()
{
	writeLine("���� ������ ��ȣ�� �Է����ּ���.\n�Է� :");
	int n;
	std::cin >> n;
	return n;
}
