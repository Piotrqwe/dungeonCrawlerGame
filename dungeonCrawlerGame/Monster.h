#pragma once
#include "Entity.h"
#include "Stats.h"

class Monster : public Entity
{
public:
    Stats stats;
    bool interaction(Player);
    Monster();
	~Monster();
};

