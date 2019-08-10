#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{
}


Game::~Game()
{
}


void Game::start(){
    MapLoader ML;
    this->map=ML.Load();
}


void Game::move(Direction D){
Location x=map.player.location;
switch (D){
case Direction::UP:
    x.y++;
    break;
case Direction::DOWN:
    x.y--;
    break;
case Direction::LEFT:
    x.x--;
    break;
case Direction::RIGHT:
    x.x++;
    break;

    }
if(map.rooms[x.roomID].tiles[x.x][x.y]->entity->interaction(map.player)==1){
    map.player.location=x;
}
}
