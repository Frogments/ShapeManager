#ifndef _DrawTool
#define _DrawTool

void Sleep();		// 0.1�� ��
void Sleep(int);	// 0.0n�� ��;

void drawAlert();

void drawLine();	// �� ���� �׸�

void drawStart();	// ���α׷��� ������ ��

void drawEnd();		// ���α׷��� ���� ��

void drawInfo(int, int);	// �������� ������ ������ ����� ��

void drawShape();	// ������ �߰��� ��

void drawIncreaseCapacity(); // �뷮�� �þ ��

int drawMenu();		// �޴���

int whatShape();	// � ������ �߰��� �� ��ȣ�� ���� ��

void drawFinish();	// ���α׷� ����


#endif // !_DrawTool