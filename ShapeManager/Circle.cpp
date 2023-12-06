#include <iostream>
#include "Circle.h"

Circle::Circle()
	: center(), rad(0.0)
{
	p = new int[300];
};

Circle::Circle(const Point& c, double r)
	:center(c), rad(r)
{
};

Circle::Circle(const Circle& other)
	: center(other.center), rad(other.rad)
{
};

Circle::~Circle()
{
	delete p;
};

void Circle::draw() const
{
	std::cout << "�� - �߽���(" << center.x << "," << center.y
		<< ") ������ " << rad << '\n';
};