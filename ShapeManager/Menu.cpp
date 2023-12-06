#include "Menu.h"
#include "Circle.h"
#include "Triangle.h"
#include "Line.h"
#include "Rectangle.h"
#include "Shape.h"
#include "DrawTool.h"
#include "addShape.h"

int startMenu(ShapeManager& sm)
{
	int input = drawMenu();

	if (input < 1 || input > 4) {
		drawAlert();
		input = 4;
	}

	switch (input)
	{
		// ���� �߰�
		case 1 :
			input = whatShape();

			if (input < 1 || input > 4) {
				drawAlert();
				input = 4;
			}

			switch ( input )
			{
			case 1:
				sm.insert(addCircle());		
				break;
			case 2:
				sm.insert(addLine());		
				break;
			case 3:
				sm.insert(addTriangle());	
				break;
			case 4:
				sm.insert(addRectangle());
				--input;
				break;
			default:
				break;
			}
			break;

		// ���� ����
		case 2 :
			sm.erase(eraseNumOfShape());
			break;

		// ���� �׸���
		case 3 :
			sm.draw();
			break;

		// ���α׷� ����
		case 4 :
			return input;
	}

	//clearScreen();
	return input;
}