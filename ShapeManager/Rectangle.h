#pragma once

#include "Point.h"
#include "Shape.h"

class Rectangle : public Shape
{
	Point* p1; 
	Point* p2;

public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	Rectangle(const Rectangle&);
	~Rectangle();

	virtual void draw() const override;
};

