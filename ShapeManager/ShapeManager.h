#ifndef _ShapeManager
#define _ShapeManager

#include "Shape.h"

class ShapeManager {
	int nShape;		// 도형 개수
	int capacity;	// 최대 용량
	Shape** shapes; // 도형을 담는 역할

public:
	explicit ShapeManager(int n); // 최대 용량 정하기

	~ShapeManager();
	ShapeManager(const ShapeManager&) = default;

	// 아직 미완성 ( 2023/12/04 )
	Shape* addCircle();
	Shape* addLine();
	Shape* addTriangle();
	Shape* addRectangle();

	void insert(Shape*);
	void draw() const;
};

#endif // !_ShapeManager
