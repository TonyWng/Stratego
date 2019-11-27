#ifndef _PLAYER_H
#define _PLAYER_H
#include <vector> 
#include "link.h"
#include "ability.h"

class Player {
    private:
        int playerNumber;
        std::vector<Link*> ownedLinks; 
        std::vector<Link*> downloadedLinks; 
        std::vector<Ability*> abilities;
    public:
        void downloadLink(Link *link);
        void useAbility(Ability *ability);
        int downloadedVirusCount();
        int downloadedDataCount();
        int abilityCount();
}

#endif
