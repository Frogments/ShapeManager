#include "Menu.h"
#include "Circle.h"
#include "Triangle.h"
#include "Line.h"
#include "Rectangle.h"
#include "Shape.h"
#include "DrawTool.h"
#include "addShape.h"
#include "SaveManager.h"


int startMenu(ShapeManager& sm)
{
	int input = drawMenu();

	if (input < 1 || input > 6) {
		drawAlert();
		input = 0;
	}

	switch (input)
	{
		// ���� �߰�
		case 1 :
			input = whatShape();	// � ������ ���� ��

			if (input < 1 || input > 4) {
				drawAlert();
				input = 0;
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

		// ���� ����
		case 4 :
			//sm.copy();
			break;

		// ���α׷� ����
		case 5 :
			return 0;

		// ���� ����, �ҷ�����
		case 6 :
		{
			int cin{ whatSetting() };
			
			if (cin < 1 || cin > 2) {
				drawAlert();
				input = 0;
			}

			// ���� ����
			if (cin == 1) {
				
			}
			// ���� �ҷ�����
			else if (cin == 2) {
				
			}

			break;
		}

	}

	//clearScreen();
	return input;
}