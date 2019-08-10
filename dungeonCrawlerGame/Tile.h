#pragma once
#include "Entity.h"
#include <memory>

class Tile
{
public:
    std::shared_ptr<Entity> entity;
    Tile(std::shared_ptr<Entity>);
    ~Tile();
};

