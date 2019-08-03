#include "entityfactory.h"
using namespace std;

entityFactory::entityFactory()
{

}

std::shared_ptr<Entity> entityFactory::createEntity(EntityType entity)
{
    switch(entity){
    case EntityType::STAIRS : {
        return shared_ptr<Stairs>(new Stairs());
    }
    case EntityType::EMPTY:{
        //todo: inicjalizacja...
    }
    default:{
        throw "No implementation found";
    }
    }
}
