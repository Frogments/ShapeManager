#pragma once

#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
	Point* center;	// 중심점의 좌표
	double rad;		// 반지름

public:
	Circle();
	Circle(const Point&, double);
	Circle(const Circle&);
	~Circle() override;

	virtual void draw() const override;
};
