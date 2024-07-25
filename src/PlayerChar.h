//
// Created by lrfri on 25.07.2024.
//

#ifndef RAYLIBSTARTER_PLAYERCHAR_H
#define RAYLIBSTARTER_PLAYERCHAR_H

#include "Character.h"
#include "Map.h"

class PlayerChar : public Character {
public:
    void draw() override;
    void update() override;

    PlayerChar(int xpos, int ypos);

    int charposx=0;
    int charposy=0;

};


#endif //RAYLIBSTARTER_PLAYERCHAR_H
