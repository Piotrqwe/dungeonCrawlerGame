#include "Monster.h"



Monster::Monster() : Entity ()
{
}





bool Monster::interaction(Player player){
if (player.stats.att>this->stats.def){this->stats.hp-=player.stats.att-this->stats.def;}
if (this->stats.att>player.stats.def){player.stats.hp-=this->stats.att-player.stats.def;}
//TODO monster death
//if (this->stats.hp<=0){}
    return 0;
}

Monster::~Monster()
{
}
