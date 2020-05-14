#pragma once

class Vector3D {
public:
	Vector3D();
	Vector3D(float _x, float _y, float _z);
	Vector3D(Vector3D& ref);
	~Vector3D();

	float x;
	float y;
	float z;
};