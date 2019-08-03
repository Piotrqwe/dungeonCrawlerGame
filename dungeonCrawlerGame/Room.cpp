#include "Room.h"



Room::Room(unsigned int x, unsigned int y)
{
    tiles = vector<vector<shared_ptr<Tile>>>(x,vector<shared_ptr<Tile>>(y));
}


Room::~Room()
{
}
