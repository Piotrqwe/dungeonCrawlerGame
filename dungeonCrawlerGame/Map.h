#pragma once
#include <vector>
#include "Player.h"
#include "Room.h"

using namespace std;

class Map
{
public:
    Player player;
    vector<Room>rooms;
    Map();
    ~Map();
};

