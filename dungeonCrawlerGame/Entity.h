#pragma once
#include "entityservice.h"
#include "Player.h"

class Entity
{
    EntityType type;
    int ID;
    int texture;
public:
    bool interaction(Player);
    EntityType getType();
    Entity();
};

