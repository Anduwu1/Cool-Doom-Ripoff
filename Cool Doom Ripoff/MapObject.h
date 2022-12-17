#pragma once
class MapObject
{
	int x, y;
public:
	MapObject(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int x() {
		return x;
	}

	int y() {
		return y;
	}
};

