#include <iostream>
#include "Triangle.h"

Triangle::Triangle()
	: p1( new Point ), p2( new Point ), p3( new Point )
{
};

Triangle::Triangle(const Point& _p1, const Point& _p2, const Point& _p3)
{
	p1 = new Point(_p1);
	p2 = new Point(_p2);
	p3 = new Point(_p3);
};

Triangle::Triangle(const Triangle& other)
{
	p1 = new Point(*(other.p1));
	p2 = new Point(*(other.p2));
	p3 = new Point(*(other.p3));
};

Triangle::~Triangle()
{
	delete p1;
	delete p2;
	delete p3;
};

void Triangle::draw() const
{
	std::cout << "»ï°¢Çü - (" << p1->x << "," << p1->y << "), (" << p2->x << "," << p2->y << "), (" << p3->x << "," << p3->y << ")\n";
}