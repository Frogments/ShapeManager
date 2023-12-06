#include "Menu.h"

int startMenu(ShapeManager& sm)
{
	int input = drawMenu();

	if (input < 1 || input > 4) {
		drawAlert();
		input = 4;
	}

	switch (input)
	{
		// 도형 추가
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

		// 프로그램 종료
		case 4 :
			return input;
	}

	return input;
}