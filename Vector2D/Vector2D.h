#pragma once

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

	//Vector2D& operator=(const Vector2D& rhs);
	Vector2D* operator+(const Vector2D* other);
	Vector2D operator-(const Vector2D& rhs);
	float operator*(const Vector2D& rhs);
	Vector2D* CrossProduct(const Vector2D&);

	friend Vector2D* operator+(const Vector2D&, const Vector2D&);
};