//
// Created by lrfri on 24.07.2024.
//

#include "Gameover.h"

Gameover::Gameover() {

}

void Gameover::update() {

}

Scene *Gameover::evaluateSceneChange() {
    if (IsKeyPressed(KEY_M)) {
        return new StartScreen();
    } else if (IsKeyPressed(KEY_N)){
        return new Gameplay();
    }else{
        return this;
    }//return this = stay on this screen (points to itself)
}

void Gameover::draw() {

    ClearBackground(BLACK);
    DrawText("GAME OVER", 90,20,50,WHITE);
    DrawText("Press M to go back to the main menu.\nPress N to start a new game.", 20,250, 22, WHITE);

}
