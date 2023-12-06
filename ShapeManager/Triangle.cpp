#include <iostream>
#include "Triangle.h"

Triangle::Triangle()
	: p1(), p2(), p3()
{
};

Triangle::Triangle(const Point& _p1, const Point& _p2, const Point& _p3)
	: p1(_p1), p2(_p2), p3(_p3)
{
};

Triangle::Triangle(const Triangle& other)
	: p1(other.p1), p2(other.p2), p3(other.p3)
{
};

Triangle::~Triangle()
{
	std::cout << "»ï°¢Çü ¼Ò¸êÀÚ\n";
};

void Triangle::draw() const
{
	std::cout << "»ï°¢Çü - (" << p1.x << "," << p1.y << "), (" << p2.x << "," << p2.y << "), (" << p3.x << "," << p3.y << ")\n";
}