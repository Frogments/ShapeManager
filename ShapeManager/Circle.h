#pragma once

#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
	Point* center;	// �߽����� ��ǥ
	double rad;		// ������

public:
	Circle();
	Circle(const Point&, double);
	Circle(const Circle&);
	~Circle() override;

	virtual void draw() const override;
};
