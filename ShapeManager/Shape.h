#pragma once

#include <iostream>

class Shape
{
public:
	Shape() {};
	virtual ~Shape() {
		std::cout << "Shape �Ҹ���\n";
	};

	virtual void draw() const = 0;
};

