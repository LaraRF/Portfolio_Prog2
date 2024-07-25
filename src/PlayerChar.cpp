//
// Created by lrfri on 25.07.2024.
//

#include "PlayerChar.h"
#include "Map.h"

void PlayerChar::update() {

    if (IsKeyPressed(KEY_W)) {
        playerposition.y++;
    }
    if (IsKeyPressed(KEY_A)) {
        playerposition.x--;
    }
    if (IsKeyPressed(KEY_S)) {
        playerposition.y--;
    }
    if (IsKeyPressed(KEY_D)) {
        playerposition.x++;
    }
}


void PlayerChar::draw() {

    DrawRectangle(playerposition.x, playerposition.y, 16,16,GRAY);
}
