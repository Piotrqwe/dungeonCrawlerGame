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

    template <typename T, typename std::enable_if<std::is_base_of<Entity, T>::value>::type* = nullptr>
    std::shared_ptr<T> createEntity() {
        std::shared_ptr<T> t = std::shared_ptr<T>(new T());
        if (std::is_same<T, Stairs>::value){
            static_cast<std::shared_ptr<T>>(t.get())->setLocation(Location(1,2,3));
        }
        return t;
    }
};
