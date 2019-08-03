#include "maploader.h"

MapLoader::MapLoader()
{

}

shared_ptr<Map> Load(){
    shared_ptr<Map> map;
    EntityFactory factory;
    Room room(5,5);


    auto stairs = factory.createEntity(EntityType::STAIRS);
    stairs.setLocation(1,2,3);
    room.tiles[0][0]=shared_ptr<Tile>(new Tile(stairs));
    room.tiles[0][1];
    room.tiles[0][2];

    room.tiles[1][0];
    room.tiles[1][1];
    room.tiles[1][2];

    room.tiles[2][0];
    room.tiles[2][1];
    room.tiles[2][2];

    map->rooms.push_back(room);



    return map;
}

