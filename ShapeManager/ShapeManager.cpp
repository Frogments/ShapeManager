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

void ShapeManager::erase(int n)
{
	if (n < 0 || n > nShape) {
		std::cout << "입력하신 번호와 맞는 도형이 없습니다.\n";
		return;
	}

	delete shapes[n];
	memmove(shapes + n, shapes + n + 1, 8 * (nShape - n));
	--nShape;
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
}