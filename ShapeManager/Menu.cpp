#include "Menu.h"
#include "addShape.h"

void showMenu(ShapeManager& sm)
{
	static int input;			// ��ȣ �Է��� �޴� ����
	input = drawMenu();

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
				break;
			default:
				break;
			}
			break;

		// ���� �׸���
		case 2 :
			sm.draw();
			break;

		// ���� ����
		case 3 :
			
			break;

		// ���α׷� ����
		case 4 :
			return;
	}

	showMenu(sm);
}