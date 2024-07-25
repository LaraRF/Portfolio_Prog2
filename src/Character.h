//
// Created by lrfri on 25.07.2024.
//

#ifndef RAYLIBSTARTER_CHARACTER_H
#define RAYLIBSTARTER_CHARACTER_H

#include "raylib.h"

class Character {

    virtual void draw()=0;
    virtual void update()=0;
};


#endif //RAYLIBSTARTER_CHARACTER_H
