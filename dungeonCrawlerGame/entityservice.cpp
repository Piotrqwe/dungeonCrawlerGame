#include "entityservice.h"
using namespace std;

EntityService::EntityService()
{

}

std::map<EntityType, std::string> EntityService::getTexturesMap()
{
    return texturesMap;
}

const std::map<EntityType,std::string> EntityService::texturesMap {
    {EntityType::WALL,"path...."},
    {EntityType::STAIRS,"path...."},
    {EntityType::MONSTER,"path...."},
    {EntityType::SPIDER,"path...."},
    {EntityType::SLIME,"path...."}
};

string EntityService::getTexturePath(EntityType entity )
{
    auto find = texturesMap.find(entity);
    if(find != texturesMap.end() ){
        return find->second;
    }else{
        throw "Texture of this entity not found!";
    }
}
