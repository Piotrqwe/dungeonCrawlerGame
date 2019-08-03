#include "entityservice.h"
#include "Entity.h"
#include "Stairs.h"
#include <memory>

class entityFactory
{
public:
    entityFactory();
    std::shared_ptr<Entity> createEntity(EntityType);
};
