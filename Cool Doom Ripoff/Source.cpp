#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"

int main() {
	Player* p = new Player(0,0,"James Bond");
	Map* m = new Map(20, 20);
	m->render();
	std::cout << p->toString();
	return 0;
}