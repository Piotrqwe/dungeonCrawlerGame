#pragma once
#include "Entity.h"
#include "Location.h"


class Stairs : public Entity
{
    Location destination;
public:
    void interaction();
    Stairs();
};


