#pragma once
#include "Entity.h"
#include "Location.h"


class Stairs : public Entity
{
    Location destination;
public:
    bool interaction(Player);
    void setLocation(Location location);
    Stairs();
};


