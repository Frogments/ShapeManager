#ifndef _Point
#define _Point

struct Point
{
	double x, y;

	Point();
	Point(int, int);
	Point(double, double);

	Point(const Point&) = default;
};

#endif // !_Point
