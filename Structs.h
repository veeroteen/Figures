#pragma once
#include <string>
using namespace std;
class Vector2i {
public:
	int x;
	int y;
	bool operator ==(Vector2i local) {
		if (this->x == local.x && this->y == local.y) {
			return true;
		}
		return false;
	}
	Vector2i operator +(Vector2i local) {
		return Vector2i{ this->x + local.x , this->y += local.y };
	}
	string get() {
		return '[' + to_string(x) + ':' + to_string(y) + ']';
	}
};

class Vector2f {
public:
	double x;
	double y;
	bool operator ==(Vector2f local) {
		if (this->x == local.x && this->y == local.y) {
			return true;
		}
		return false;
	}
	Vector2f operator +(Vector2f local) {
		return Vector2f{ this->x + local.x , this->y += local.y };
	}
	string get() {
		return '[' + to_string(x) + ':' + to_string(y) + ']';
	}
};


class Linef {
public:
	Vector2f positions[2];
	string get() {
		return '[' + to_string(positions[0].x) + ':' + to_string(positions[0].y) + ']' + " [" + to_string(positions[1].x) + ':' + to_string(positions[1].y) + ']';
	}

	bool operator ==(Linef local) {

		if ((local.positions[0] == positions[0] && local.positions[1] == positions[1]) || (local.positions[0] == positions[1] && local.positions[1] == positions[0])) {
			return true;
		}
		return false;
	}


};

class Line {
public:
	Vector2i positions[2];
	string get() {
		return '[' + to_string(positions[0].x) + ':' + to_string(positions[0].y) + ']' + " [" + to_string(positions[1].x) + ':' + to_string(positions[1].y) + ']';
	}

	bool operator ==(Line local) {

		if ((local.positions[0] == positions[0] && local.positions[1] == positions[1]) || (local.positions[0] == positions[1] && local.positions[1] == positions[0])) {
			return true;
		}
		return false;
	}


};