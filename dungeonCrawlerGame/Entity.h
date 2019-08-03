#pragma once
#include "entityservice.h"

class Entity
{
    EntityType type;
    int ID;
    int texture;
public:
    virtual void interaction();
    Entity();
    int getType();;
};

