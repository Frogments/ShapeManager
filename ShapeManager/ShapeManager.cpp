#include <iostream>
#include <string>
#include "ShapeManager.h"
#include "Circle.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "DrawTool.h"

ShapeManager::ShapeManager(int n)
	: capacity(n), nShape(0)
{
	shapes = new Shape*[capacity];
}

ShapeManager::~ShapeManager()
{
	for (int i = 0; i < nShape; ++i)
	{
		delete shapes[i];
	}
	delete[] shapes;
}

Shape* ShapeManager::addCircle()
{
	std::string str;
	return new Circle(Point(0, 0), 3.33);
}

Shape* ShapeManager::addLine()
{
	return new Line(Point(0, 0), Point(1, 1));
}

Shape* ShapeManager::addTriangle()
{
	return nullptr;
}

Shape* ShapeManager::addRectangle()
{
	return nullptr;
}

// 인자로 넣을 때 new로 넣기
void ShapeManager::insert(Shape* other)
{
	drawShape();
	shapes[nShape] = other;
	++nShape;

	// 용량이 꽉 차면 두배로 늘려놓기
	if (nShape == capacity) {
		capacity *= 2;
		Shape** tmp = new Shape * [capacity];
		for (int i = 0; i < nShape; ++i) {
			tmp[i] = shapes[i];
		}
		delete[] shapes;
		shapes = tmp;

		drawIncreaseCapacity();
	}
}

void ShapeManager::draw() const
{
	drawInfo(nShape, capacity);

	for (int i = 0; i < nShape; ++i)
	{
		std::cout << "[" << i << "] ";
		shapes[i]->draw();
		Sleep(30);
	}

	drawEnd();
}