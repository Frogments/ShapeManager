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
		// 도형 추가
		case 1 :
			input = whatShape();	// 어떤 도형을 만들 지

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

		// 도형 제거
		case 2 :
			sm.erase(eraseNumOfShape());
			break;

		// 도형 그리기
		case 3 :
			sm.draw();
			break;

		// 도형 복사
		case 4 :
			//sm.copy();
			break;

		// 프로그램 종료
		case 5 :
			return 0;

		// 도형 저장, 불러오기
		case 6 :
		{
			int cin{ whatSetting() };
			
			if (cin < 1 || cin > 2) {
				drawAlert();
				input = 0;
			}

			// 도형 저장
			if (cin == 1) {
				
			}
			// 도형 불러오기
			else if (cin == 2) {
				
			}

			break;
		}

	}

	//clearScreen();
	return input;
}