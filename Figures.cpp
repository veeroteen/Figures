#include <iostream>
#include <string>
#include "Geometry.h"
using namespace std;

int main()
{
	while (true) {
		cout << "Enter figure name\n";
		string str;
		cin >> str;
		if (str == "circle") {
			Round figure;
			cout << "Enter x and y of center, and radius\n";
			Vector2f center;
			double radius;
			cin >> center.x >> center.y >> radius;
			figure.set(center, radius);
			cout << "Color is " << figure.getColor() << "\nSquare is " << figure.square() << endl;
			Vector2f* tmp = figure.describe();
			cout << "Describe rectangle: " << tmp[0].get() << tmp[1].get() << tmp[2].get() << tmp[3].get() << endl;
			delete[]tmp;
		}
		else if (str == "triangle") {
			Triangle figure;
			cout << "Enter x and y of center, and side\n";
			Vector2f center;
			double side;
			cin >> center.x >> center.y >> side;
			figure.set(center, side);
			cout << "Color is " << figure.getColor() << "\nSquare is " << figure.square() << endl;
			Vector2f* tmp = figure.describe();
			cout << "Describe rectangle: " << tmp[0].get() << tmp[1].get() << tmp[2].get() << tmp[3].get() << endl;
			delete[]tmp;
		}
		else if (str == "rectangle") {
			Rectangle figure;
			cout << "Enter x, y of center, and height , width\n";
			Linef cords;
			cin >> cords.positions[1].x >> cords.positions[1].y >> cords.positions[0].x >> cords.positions[0].y;
			figure.set(cords);
			cout << "Color is " << figure.getColor() << "\nSquare is " << figure.square() << endl;
			Vector2f* tmp = figure.describe();
			cout << "Describe rectangle: " << tmp[0].get() << tmp[1].get() << tmp[2].get() << tmp[3].get() << endl;
			delete[]tmp;
		}
		else if (str == "square") {
			Square figure;
			cout << "Enter x and y of center, and side\n";
			Vector2f center;
			double side;
			cin >> center.x >> center.y >> side;
			figure.set(center, side);
			cout << "Color is " << figure.getColor() << "\nSquare is " << figure.square() << endl;
			Vector2f* tmp = figure.describe();
			cout << "Describe rectangle: " << tmp[0].get() << tmp[1].get() << tmp[2].get() << tmp[3].get() << endl;
			delete[]tmp;
		}
	}
}

