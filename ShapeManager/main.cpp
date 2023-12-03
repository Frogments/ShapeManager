#include "Point.h"
#include "ShapeManager.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Line.h"
#include "DrawTool.h"
#include "Menu.h"

int main()
{
	ShapeManager sm(5);

	drawStart();
	
	showMenu(sm);

	drawEnd();
	drawFinish();
}

// 할 일
// 
// 메뉴 1, 3번 구현하기
//
// 잘 못 입력해도 한두번 기회를 주게
// 
// 한번만 봐드리겠습니다 <- 이런 느낌
// 더 그러시면 강제 종료합니다? <- 이런 느낌