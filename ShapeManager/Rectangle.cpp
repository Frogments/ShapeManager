#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle()
	: p1( new Point ), p2( new Point )
{
};

Rectangle::Rectangle(const Point& _p1, const Point& _p2)
	: p1(new Point(_p1)), p2(new Point(_p2))
{
};

Rectangle::Rectangle(const Rectangle& other)
{
	p1 = new Point(*(other.p1));
	p2 = new Point(*(other.p2));
};

Rectangle::~Rectangle()
{
	delete p1;
	delete p2;
};

void Rectangle::draw() const
{
	std::cout << "»ç°¢Çü - (" << p1->x << "," << p1->y << "), (" << p2->x << "," << p2->y << ")\n";
}