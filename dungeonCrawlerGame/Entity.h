#pragma once
#include "entityservice.h"

class Entity
{
    EntityType type;
    int ID;
    int texture;
public:
    void interaction();
    int getType();
    Entity();
};

