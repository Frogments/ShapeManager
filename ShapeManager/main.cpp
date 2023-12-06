#include "Line.h"
#include "DrawTool.h"
#include "Menu.h"
#include "Point.h"
#include "ShapeManager.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"


// 번호붙은 도형 제거해라
// 이런거 냄

int main()
{
	ShapeManager sm(5);

	drawStart(); 
	
	int n{};
	while (n != 4) {
		n = startMenu(sm);
	};

	drawFinish();
}