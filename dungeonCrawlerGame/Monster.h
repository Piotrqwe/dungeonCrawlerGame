#pragma once
#include "Entity.h"
#include "Stats.h"

class Monster : public Entity
{
    Stats stats;

public:
    void interaction();
	Monster();
	~Monster();
};

