#include <string>
#include "addShape.h"

Shape* addCircle()
{
	std::string str;
	
	return new Circle();
}

Shape* addLine()
{
	return new Line(Point(0, 0), Point(1, 1));
}

Shape* addTriangle()
{
	return nullptr;
}

Shape* addRectangle()
{
	return nullptr;
}
