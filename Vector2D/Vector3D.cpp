#include"Vector3D.h"

Vector3D::Vector3D()
	: x(0), y(0), z(0)
{
}

Vector3D::Vector3D(float _x, float _y, float _z)
	: x(_x), y(_y), z(_z)
{
}

Vector3D::Vector3D(Vector3D& ref)
{
	this->x = ref.x;
	this->y = ref.y;
	this->z = ref.z;
}

Vector3D::~Vector3D()
{

}