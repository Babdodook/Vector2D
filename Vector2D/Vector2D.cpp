#define _USE_MATH_DEFINES

#include"Vector2D.h"
#include<cmath>

#define DEG2RAD M_PI/180
#define RAD2DEG 180/M_PI

Vector2D::Vector2D() 
	: x(0), y(0), angle(0)
{
}

Vector2D::Vector2D(float _x, float _y)
	: x(_x), y(_y)
{
	angle = Angle();
}

Vector2D::Vector2D(Vector2D& ref)
{
	this->x = ref.x;
	this->y = ref.y;
	this->angle = ref.angle;
}

Vector2D::~Vector2D()
{
}

float Vector2D::Length()
{
	return sqrtf(powf(x, 2) + powf(y, 2));		// x^2 + y^2
}

float Vector2D::Angle()
{
	return atan2f(y, x) * RAD2DEG;
}

Vector2D Vector2D::Normalize()
{
	float length = Length();

	Vector2D nomalizedVector;
	nomalizedVector.x = x / length;
	nomalizedVector.y = y / length;

	return nomalizedVector;
}

Vector2D& Vector2D::operator=(const Vector2D& rhs)
{
	if (this == &rhs)
		return *this;

	this->x = 0;
	this->y = 0;
	this->angle = rhs.angle;

	return *this;
}

Vector2D* Vector2D::operator+(const Vector2D* other)
{
	Vector2D* newVector = new Vector2D(x + other->x, y + other->y);

	return newVector;
}

Vector2D Vector2D::operator-(const Vector2D& rhs)
{
	this->x += -rhs.x;
	this->y += -rhs.y;
	return *this;
}

void Vector2D::Sum(const Vector2D* other)
{
	this->x += other->x;
	this->y += other->y;
}

void Vector2D::Sub(const Vector2D* other)
{
	this->x -= other->x;
	this->y -= other->y;
}

float Vector2D::InnerProduct(const Vector2D* other)
{
	return (this->x * other->x) + (this->y * other->y);
}

Vector3D* Vector2D::CrossProduct(const Vector2D* other)
{
	Vector3D* normalVec = new Vector3D();
	normalVec->x = 0;
	normalVec->y = 0;
	normalVec->z = (this->x * other->y) - (this->y * other->x);
	return normalVec;
}