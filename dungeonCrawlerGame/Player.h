#pragma once
#include "Location.h"
#include "Item.h"
#include "Stats.h"

class Player
{
public:
    Location location;
    Stats stats;
	Player();
	~Player();
};

