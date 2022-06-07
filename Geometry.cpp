#include "Geometry.h"

Geometry::Geometry() {
	color = None;
	center = { 0,0 };
}

void Geometry::setCenter(Vector2f &n) {
	center.x = n.x;
	center.y = n.y;
}
string Geometry::getColor() const {
	return colorName[color];
}

Round::Round() {
	color = Red;
}
double Round::square() const {
	return atan(1) * 4 * radius;
}

Vector2f* Round::describe() const {
	Vector2f* ret = new Vector2f[]
	{
		Vector2f{center.x - radius,center.y + radius},
		Vector2f{center.x + radius,center.y + radius},
		Vector2f{center.x + radius,center.y - radius},
		Vector2f{center.x - radius,center.y - radius}
	};
	return ret;
}
void Round::set(Vector2f& center, double radius) {
	setCenter(center);
	this->radius = radius;
	
}
void Round::set(double n) {
	radius = n;
}

Rectangle::Rectangle() {
	color = Yellow;
}
double Rectangle::square() const {
	return sides.x * sides.y;
}
Vector2f* Rectangle::describe () const {
	Vector2f* ret = new Vector2f[]
	{
		Vector2f{center.x - (sides.y / 2),center.y + (sides.x / 2)},
		Vector2f{center.x + (sides.y / 2),center.y + (sides.x / 2)},
		Vector2f{center.x + (sides.y / 2),center.y - (sides.x / 2)},
		Vector2f{center.x - (sides.y / 2),center.y - (sides.x / 2)}
	};
	return ret;
}
void Rectangle::set(Linef& n) {
	setCenter(n.positions[1]);
	sides = n.positions[0];
}
void Rectangle::set(Vector2f &n) {
	sides = n;
}

Triangle::Triangle() {
	color = Blue;
}
double Triangle::square() const {
	return (side * side) * sqrt(3) / 4;
}
Vector2f* Triangle::describe() const {
	double height = sqrt((side * side) - ((side * side) / 4));
	Vector2f* ret = new Vector2f[]
	{
		Vector2f{center.x - (side / 2),center.y + (height / 2)},
		Vector2f{center.x + (side / 2),center.y + (height / 2)},
		Vector2f{center.x + (side / 2),center.y - (height / 2)},
		Vector2f{center.x - (side / 2),center.y - (height / 2)}
	};
	return ret;
}
void Triangle::set(Vector2f &center, double side) {
	setCenter(center);
	this->side = side;
}
void Triangle::set(double n) {
	side = n;
}

Square::Square() {
	color = Green;
}
double Square::square() const {
	return side * side;
}
Vector2f* Square::describe() const {
	Vector2f* ret = new Vector2f[]
	{
		Vector2f{center.x - (side / 2),center.y + (side / 2)},
		Vector2f{center.x + (side / 2),center.y + (side / 2)},
		Vector2f{center.x + (side / 2),center.y - (side / 2)},
		Vector2f{center.x - (side / 2),center.y - (side / 2)}
	};
	return ret;
}
void Square::set(Vector2f& center, double side) {
	setCenter(center);
	this->side = side;
}
void Square::set(double n) {
	side = n;
}