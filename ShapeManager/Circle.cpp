#include <iostream>
#include "Circle.h"

Circle::Circle()
	: center( new Point ), rad(0.0)
{
};

Circle::Circle(const Point& c, double r)
	:center(new Point(c)), rad(r)
{
};

Circle::Circle(const Circle& other)
	: center(new Point(*(other.center))), rad(other.rad)
{
};

Circle::~Circle()
{
	std::cout << "Circle소멸자\n";
	delete center;
};

void Circle::draw() const
{
	std::cout << "원 - 중심점(" << center->x << "," << center->y
		<< ") 반지름 " << rad << '\n';
};