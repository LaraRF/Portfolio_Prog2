//
// Created by lrfri on 24.07.2024.
//

#ifndef RAYLIBSTARTER_GAMEOVER_H
#define RAYLIBSTARTER_GAMEOVER_H

#include "Scene.h"
#include "StartScreen.h"
#include "Gameplay.h"

class Gameover : public Scene {
public:

    Gameover();

    void update() override;

    Scene *evaluateSceneChange() override;

    void draw() override;

};


#endif //RAYLIBSTARTER_GAMEOVER_H
