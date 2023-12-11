#pragma once

#include "Shape.h"

class ShapeManager {
	int nShape;		// ���� ����
	int capacity;	// �ִ� �뷮
	Shape** shapes; // ������ ��� ����

public:
	explicit ShapeManager(int n); // �ִ� �뷮 ���ϱ�

	~ShapeManager();
	ShapeManager(const ShapeManager&) = default;

	void copy(int n);
	void insert(Shape*);
	
	void erase(int n);
	void eraseAll();

	void draw() const;
};
