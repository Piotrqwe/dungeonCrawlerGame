#pragma once
#include "Maploader.h"


enum class Direction{UP,DOWN,LEFT,RIGHT};

class Game
{
    Map map;
    void start();
public:

	Game();
	~Game();
    void move (Direction);

};

