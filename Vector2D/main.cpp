#pragma once

#include<iostream>
#include"Vector2D.h"

int main()
{
	Vector2D* v1 = new Vector2D(2, 2);
	Vector2D* v2 = new Vector2D(2, 3);
	Vector2D* v3 = new Vector2D(2, 5);

	Vector2D* normalized = new Vector2D(2, 5);

	std::cout << "x: " << v1->x << " y: " << v1->y << " angle: " << v1->angle << " length: " << v1->Length() << std::endl;
	std::cout << "x: " << v2->x << " y: " << v2->y << " angle: " << v2->angle << " length: " << v2->Length() << std::endl;

	v1 = v1 + v2;
	v1 = v1->operator+(v2);

	std::cout << "x: " << v1->x << " y: " << v1->y << " angle: " << v1->angle << " length: " << v1->Length() << std::endl;
	//v1 = v1 + v2;

	std::cout << "end" << std::endl;

}