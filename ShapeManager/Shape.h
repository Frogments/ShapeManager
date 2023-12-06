#pragma once

#include <iostream>

class Shape
{
public:
	Shape() {};
	virtual ~Shape() {
		std::cout << "Shape ¼Ò¸êÀÚ\n";
	};

	virtual void draw() const = 0;
};

