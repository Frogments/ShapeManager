#include "Point.h"

Point::Point()
	: x(0.0), y(0.0)
{
};

Point::Point(int a, int b)
{
	x = (double)a;
	y = (double)b;
}

Point::Point(double a, double b) : x(a), y(b)
{
};
