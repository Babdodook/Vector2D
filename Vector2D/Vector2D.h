#pragma once
#include"Vector3D.h"

class Vector2D {
public:
	Vector2D();
	Vector2D(float _x, float _y);
	Vector2D(Vector2D& ref);
	~Vector2D();

	float x;
	float y;
	float angle;

	float Length();		// 거리
	float Angle();
	Vector2D Normalize();	// 정규화

	Vector2D& operator=(const Vector2D& rhs);
	Vector2D* operator+(const Vector2D* other);
	Vector2D operator-(const Vector2D& rhs);

	void Sum(const Vector2D*);
	void Sub(const Vector2D*);
	float InnerProduct(const Vector2D*);		// 내적
	Vector3D* CrossProduct(const Vector2D*);	// 외적
};