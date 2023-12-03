#ifndef _Circle
#define _Circle

#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
	Point center;	// �߽����� ��ǥ
	double rad;		// ������
public:
	Circle();
	Circle(const Point&, double);
	Circle(const Circle&);
	~Circle();

	virtual void draw() const override;
};

#endif // !_Circle
