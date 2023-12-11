#include "Line.h"
#include "DrawTool.h"
#include "Menu.h"
#include "Point.h"
#include "ShapeManager.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"


// �� ��
// ���� Ÿ�� ��ü ����
// ���� ���

int main()
{
	ShapeManager sm(5);

	drawStart(); 
	
	int n{ 1 };
	while (n != 0) {
		n = startMenu(sm);
	};

	drawFinish();
}