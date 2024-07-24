//
// Created by lrfri on 24.07.2024.
//

#include "InfoScreen.h"

Scene *InfoScreen::evaluateSceneChange() { //gives the buttons their functions
    if (IsKeyPressed(KEY_M)) {
        return new StartScreen();
    } else {
        return this;
    }//return this = stay on this screen (points to itself)
}

void InfoScreen::draw() {

    DrawText("This is how you play:\n\n Use WASD keys to move. \n\n Use P to pick things up\n and use O to drop things.\n\n Use M to go back to the main menu.", 20,20,20,WHITE);

}

void InfoScreen::update() {

}

InfoScreen::InfoScreen() {

}
