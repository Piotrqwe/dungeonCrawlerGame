#pragma once
#include <vector>
#include "Player.h"
#include "Room.h"

using namespace std;

class Map
{
    Player player;
public:
    vector<Room>rooms;
    Map();
    ~Map();
};

