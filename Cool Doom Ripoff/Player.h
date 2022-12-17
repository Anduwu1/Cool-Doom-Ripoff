#pragma once
#include "MapObject.h"
#include <string>
class Player : public MapObject
{
	
	public:
		std::string name = "";
	Player(int x, int y, std::string name) : MapObject(x, y) {
		this->name = name;
	}

	std::string toString() {
		return name;
	}
};

