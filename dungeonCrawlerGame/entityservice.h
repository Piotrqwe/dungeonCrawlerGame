#include <string>
#include <map>
#pragma once

enum class EntityType{EMPTY,WALL,STAIRS,MONSTER,SPIDER,SLIME};

class EntityService
{
private:
    static const std::map<EntityType,std::string> texturesMap;

public:
    EntityService();

    std::string getTexturePath(EntityType);
    static std::map<EntityType, std::string> getTexturesMap();
};
