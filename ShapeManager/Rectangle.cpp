#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle()
	: p1(), p2()
{
};

Rectangle::Rectangle(const Point& _p1, const Point& _p2)
	: p1(_p1), p2(_p2)
{
};

Rectangle::Rectangle(const Rectangle& other)
	: p1(other.p1), p2(other.p2)
{
};

Rectangle::~Rectangle()
{
	std::cout << "사각형 소멸자\n";
};

void Rectangle::draw() const
{
	std::cout << "사각형 - (" << p1.x << "," << p1.y << "), (" << p2.x << "," << p2.y << ")\n";
}