#include "Menu.h"

void showMenu(ShapeManager& sm)
{
	static int input;			// 번호 입력을 받는 변수
	input = drawMenu();

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
				sm.insert(sm.addCircle());
				break;
			case 2:
				sm.insert(sm.addLine());
				break;
			case 3:
				sm.insert(sm.addTriangle());
				break;
			case 4:
				sm.insert(sm.addRectangle());
				break;
			default:
				break;
			}
			break;

		// 도형 그리기
		case 2 :
			sm.draw();
			break;

		// 도형 제거
		case 3 :
			
			break;

		// 프로그램 종료
		case 4 :
			return;
	}

	showMenu(sm);
}