#include "entityservice.h"
#include "Entity.h"
#include "Stairs.h"
#include <memory>

class EntityFactory
{
private:
    static const int DEFAULT_SPIDER_ATTACK = 10;
    static const int DEFAULT_SPIDER_HP = 50;
public:
    EntityFactory();
    std::shared_ptr<Entity> createEntity(EntityType);
};
