#pragma once
#include <string>
#include <math.h>
#include <iostream>
#include "Structs.h"
using namespace std;
const string colorName[] = { "RED", "BLUE", "GREEN", "YELLOW", "NONE" };
enum Color {
	Red,
	Blue,
	Green, 
	Yellow,
	None
};


class Geometry
{
public:
	Color color = None;
	Vector2f center;
	Geometry();

	void setCenter(Vector2f &n);

	string getColor() const;

	
};

class Round :public Geometry {
	double radius = 0;
public:
	Round();

	double square() const;

	Vector2f* describe() const;

	void set(Vector2f& center, double radius);

	void set(double n);
};

class Rectangle : public Geometry {
	Vector2f sides;
public:
	Rectangle();

	double  square() const;

	Vector2f* describe() const;

	void set(Linef &n);

	void set(Vector2f& n);

};

class Triangle : public Geometry {
	double side = 0;
public:
	Triangle();

	double square() const;

	Vector2f* describe() const;

	void set(Vector2f& center, double side);

	void set(double n);
};

class Square : public Geometry {
	double side = 0;
public:
	Square();

	double square() const;

	Vector2f* describe() const;

	void set(Vector2f& center, double side);
	
	void set(double n);


};