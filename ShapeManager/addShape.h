#ifndef _ADDSHAPE
#define _ADDSHAPE

#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "DrawTool.h"

// ���� �̿ϼ� ( 2023/12/06 )
Shape* addCircle();
Shape* addLine();
Shape* addTriangle();
Shape* addRectangle();

#endif // !_ADDSHAPE
