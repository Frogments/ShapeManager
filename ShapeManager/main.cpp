#include "Point.h"
#include "ShapeManager.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Line.h"
#include "DrawTool.h"
#include "Menu.h"

int main()
{
	ShapeManager sm(5);

	drawStart(); 
	
	showMenu(sm);

	drawEnd();
	drawFinish();
}