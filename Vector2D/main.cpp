#pragma once

#include<iostream>
#include"Vector2D.h"
#include"Vector3D.h"

int main()
{
	Vector2D* v1 = new Vector2D(2, 2);
	Vector2D* v2 = new Vector2D(2, 3);
	Vector2D* v3 = new Vector2D(2, 5);
	Vector3D* normalVec = new Vector3D();

	Vector2D* normalized = new Vector2D(2, 5);

	std::cout << "v1 info: " << "x: " << v1->x << " y: " << v1->y << " angle: " << v1->angle << " length: " << v1->Length() << std::endl;
	std::cout << "v2 info: " << "x: " << v2->x << " y: " << v2->y << " angle: " << v2->angle << " length: " << v2->Length() << std::endl;

	normalVec = v1->CrossProduct(v2);
	float scala = v1->InnerProduct(v2);
	std::cout << "v1과 v2의 내적 : " << scala << std::endl;
	std::cout << "v1과 v2의 외적한 벡터: " << normalVec->x << ", " << normalVec->y << ", " << normalVec->z << std::endl;

	//std::cout << "v1 info: " << "x: " << v1->x << " y: " << v1->y << " angle: " << v1->angle << " length: " << v1->Length() << std::endl;

	delete v1;
	delete v2;
	delete v3;
	delete normalVec;
	v1 = nullptr;
	v2 = nullptr;
	v3 = nullptr;
	normalVec = nullptr;

	return 0;
}