#ifndef _ShapeManager
#define _ShapeManager

#include "Shape.h"

class ShapeManager {
	int nShape;		// ���� ����
	int capacity;	// �ִ� �뷮
	Shape** shapes; // ������ ��� ����

public:
	explicit ShapeManager(int n); // �ִ� �뷮 ���ϱ�

	~ShapeManager();
	ShapeManager(const ShapeManager&) = default;

	// ���� �̿ϼ� ( 2023/12/04 )
	Shape* addCircle();
	Shape* addLine();
	Shape* addTriangle();
	Shape* addRectangle();

	void insert(Shape*);
	void draw() const;
};

#endif // !_ShapeManager
