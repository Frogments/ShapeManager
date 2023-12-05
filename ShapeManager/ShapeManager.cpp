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

<<<<<<< HEAD
=======
Shape* ShapeManager::addCircle()
{
	std::string point{ makePoint() };	// 중심점

	size_t commaPos = point.find(',');

	if (commaPos != std::string::npos) {
		Point tmp{ std::stoi(point.substr(0, commaPos)), std::stoi(point.substr(commaPos + 1)) };
		std::string length{ makeNumber() }; // 길이
		return new Circle(tmp, std::stoi(length));
	}
	else {
		drawAlert();
		return nullptr;
	}
}

// 여기 하는 중
Shape* ShapeManager::addLine()
{
	std::string _p1{ makePoint() };
	size_t commaPos = _p1.find(',');

	if (commaPos != std::string::npos) 
	{
		std::string _p2{ makePoint() };
		commaPos = _p2.find(',');

		if (commaPos != std::string::npos) 
		{
			Point tmp{ std::stoi(_p1.substr(0, commaPos)), std::stoi(_p1.substr(commaPos + 1)) };
			Point tmp2{ std::stoi(_p2.substr(0, commaPos)), std::stoi(_p2.substr(commaPos + 1)) };

			return new Line(tmp, tmp2);
		}
		else 
		{
			drawAlert();
			return nullptr;
		}
	}
	else {
		drawAlert();
		return nullptr;
	}
}

Shape* ShapeManager::addTriangle()
{
	std::string _p1{ makePoint() };	
	size_t commaPos = _p1.find(',');

	if (commaPos != std::string::npos) 
	{
		std::string _p2{ makePoint() }; 
		commaPos = _p2.find(',');

		if (commaPos != std::string::npos) 
		{
			std::string _p3{ makePoint() };
			commaPos = _p3.find(',');

			if (commaPos != std::string::npos) 
			{
				Point tmp{ std::stoi(_p1.substr(0, commaPos)), std::stoi(_p1.substr(commaPos + 1)) };
				Point tmp2{ std::stoi(_p2.substr(0, commaPos)), std::stoi(_p2.substr(commaPos + 1)) };
				Point tmp3{ std::stoi(_p3.substr(0, commaPos)), std::stoi(_p3.substr(commaPos + 1)) };

				return new Triangle(tmp, tmp2, tmp3);
			}
			else 
			{
				drawAlert();
				return nullptr;
			}
		}
		else 
		{
			drawAlert();
			return nullptr;
		}
	}
	else 
	{
		drawAlert();
		return nullptr;
	}
}

Shape* ShapeManager::addRectangle()
{
	std::string _p1{ makePoint() };
	size_t commaPos = _p1.find(',');

	if (commaPos != std::string::npos)
	{
		std::string _p2{ makePoint() };
		commaPos = _p2.find(',');

		if (commaPos != std::string::npos)
		{
			Point tmp{ std::stoi(_p1.substr(0, commaPos)), std::stoi(_p1.substr(commaPos + 1)) };
			Point tmp2{ std::stoi(_p2.substr(0, commaPos)), std::stoi(_p2.substr(commaPos + 1)) };

			return new Line(tmp, tmp2);
		}
		else
		{
			drawAlert();
			return nullptr;
		}
	}
	else {
		drawAlert();
		return nullptr;
	}
}

>>>>>>> af1e8ab00ffcbeda07abb8ce02eb4a377dfc7195
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