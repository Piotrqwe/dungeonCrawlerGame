#include "Tile.h"

Tile::Tile(std::shared_ptr<Entity> entity)
{
    this->entity = entity;
}

Tile::~Tile()
{
}
