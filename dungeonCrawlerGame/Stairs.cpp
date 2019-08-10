#include "Stairs.h"

void Stairs::setLocation(Location location)
{
    this->destination=location;
}

Stairs::Stairs() : Entity ()
{

}

bool Stairs::interaction(Player player){
player.location=this->destination;
return 0;
}
