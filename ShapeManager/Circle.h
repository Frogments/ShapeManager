#pragma once

#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
	Point center;	// �߽����� ��ǥ
	double rad;		// ������
	int* p;
public:
	Circle();
	Circle(const Point&, double);
	Circle(const Circle&);
	~Circle();

	virtual void draw() const override;
};
