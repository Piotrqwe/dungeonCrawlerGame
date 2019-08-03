#pragma once
#include <string>
#include "Map.h"
#include "Room.h"
#include "entityfactory.h"
#include "entityservice.h"
#include <vector>

using namespace std;


class MapLoader
{
public:
    MapLoader();
    Map Load();
};


