#ifndef _Line
#define _Line

#include "Point.h"
#include "Shape.h"

class Line : public Shape
{
	Point p1, p2;

public:
	Line();
	Line(const Point&, const Point&);
	Line(const Line&);
	~Line();

	virtual void draw() const override;
};

#endif // !_Line
