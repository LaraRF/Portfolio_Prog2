//
// Created by lrfri on 24.07.2024.
//

#ifndef RAYLIBSTARTER_INFOSCREEN_H
#define RAYLIBSTARTER_INFOSCREEN_H

#include "Scene.h"
#include "Startscreen.h"

class InfoScreen : public Scene{

public:
    InfoScreen();

    void update() override;

    Scene *evaluateSceneChange() override;

    void draw() override;

};


#endif //RAYLIBSTARTER_INFOSCREEN_H
