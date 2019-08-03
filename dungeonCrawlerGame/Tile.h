#pragma once
#include "Entity.h"
#include <memory>

class Tile
{
    std::shared_ptr<Entity> entity;
public:
    Tile(std::shared_ptr<Entity>);
    ~Tile();
};

