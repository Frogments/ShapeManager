#include <iostream>
#include "Line.h"

Line::Line()
	: p1(), p2()
{
};

Line::Line(const Point& _p1, const Point& _p2)
	: p1(_p1), p2(_p2)
{
};

Line::Line(const Line& other)
	: p1(other.p1), p2(other.p2)
{
};

Line::~Line()
{
}

void Line::draw() const
{
	std::cout << "¼±ºÐ - (" << p1.x << "," << p1.y << "), (" << p2.x << "," << p2.y << ")\n";
}