#include "addShape.h"

Shape* addCircle()
{
	std::string point{ makePoint() };	// 중심점

	size_t commaPos = point.find(',');

	if (commaPos != std::string::npos) {
		Point tmp{ std::stoi(point.substr(0, commaPos)), std::stoi(point.substr(commaPos + 1)) };
		int length{ makeNumber() }; // 길이
		return new Circle(tmp, length);
	}
	else {
		drawAlert();
		return nullptr;
	}
}

// 여기 하는 중
Shape* addLine()
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

Shape* addTriangle()
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

Shape* addRectangle()
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
