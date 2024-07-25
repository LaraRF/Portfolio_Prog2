//
// Created by lrfri on 25.07.2024.
//

#include "PlayerChar.h"
#include "Map.h"

void PlayerChar::update() {


    if (IsKeyDown(KEY_W)) {
        charposy--;
    }
    if (IsKeyDown(KEY_A)) {
        charposx--;
    }
    if (IsKeyDown(KEY_S)) {
        charposy++;
    }
    if (IsKeyDown(KEY_D)) {
        charposx++;
    }
}


void PlayerChar::draw() {

    DrawRectangle(charposx, charposy, 16,16,GRAY);
}

PlayerChar::PlayerChar(int xpos, int ypos) {

}
