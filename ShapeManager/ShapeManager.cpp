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

//void ShapeManager::copy(int n)
//{
//	insert(new Shape)
//}

// ���ڷ� ���� �� new�� �ֱ�
void ShapeManager::insert(Shape* other)
{
	shapes[nShape] = other;
	++nShape;

	// �뷮�� �� ���� �ι�� �÷�����
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
	if (n < 0 || n >= nShape) {
		std::cout << "�Է��Ͻ� ��ȣ�� �´� ������ �����ϴ�.\n";
		return;
	}

	delete shapes[n];
	for (int i = n; i < nShape - 1; ++i)
		shapes[n] = shapes[n + 1];
	
	//memmove(shapes + n, shapes + n + 1, 8 * (nShape - static_cast<size_t>(n)));
	--nShape;
}

void ShapeManager::eraseAll()
{
	for (int i = 0; i < nShape; ++i) {
		delete shapes[i];
	}
	nShape = 0;
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

	std::cout << "\n\n";
	drawLine();
}