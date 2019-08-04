#pragma once
#include "Location.h"
#include "Item.h"
#include "Stats.h"

class Player
{
    Stats stats;
    Location location();
public:

	Player();
	~Player();
};

