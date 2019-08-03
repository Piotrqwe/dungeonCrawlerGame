#pragma once
#include <vector>
#include "Tile.h"
#include <memory>

using namespace std;

class Room
{

public:
    vector<vector<shared_ptr<Tile>>>tiles;
    Room(unsigned int, unsigned int);
	~Room();
};

