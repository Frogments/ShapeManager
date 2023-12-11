#include "Line.h"
#include "DrawTool.h"
#include "Menu.h"
#include "Point.h"
#include "ShapeManager.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"


// 할 일
// 도형 타입 전체 제거
// 파일 기록

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