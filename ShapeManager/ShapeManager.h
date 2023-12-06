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

	void insert(Shape*);
	void erase(int n);

	void draw() const;
};

#endif // !_ShapeManager
