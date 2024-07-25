//
// Created by lrfri on 24.07.2024.
//

#include "Gameplay.h"

void Gameplay::update() {

    theplayer->update();

}

Scene *Gameplay::evaluateSceneChange() {
    if (IsKeyPressed(KEY_M)) {
        return new StartScreen();
    } else if(IsKeyPressed(KEY_E)){
        return new Gameover();
    }
    else {
        return this;
    }//return this = stay on this screen (points to itself);
}

void Gameplay::draw() {
    ClearBackground(GRAY);

    mapgenerator.drawMap(Game::ScreenWidth, Game::ScreenHeight); //ruft Funkktion auf, die map drawt
    if (IsKeyPressed(KEY_R)) { //wenn man R drückt, mach neue Map
        mapgenerator.generateMap();
    }
    theplayer->draw();
}


Gameplay::Gameplay() {
    mapgenerator.generateMap(); //ruft Funktion auf, die Map erstellt

    theplayer = new PlayerChar(map::getStartPosX(), map::getStartPosY());
}

