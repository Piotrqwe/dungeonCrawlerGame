#pragma once
#include "Entity.h"

class Empty : public Entity
{
public:
    bool interaction(Player);
    Empty();
    ~Empty();
};

