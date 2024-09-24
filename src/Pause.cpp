#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

class $modify(DoodlePauseMod, PauseLayer) {
    void keyDown(cocos2d::enumKeyCodes p0) {
        if (p0 == cocos2d::KEY_D)
            this->enterDoodleMode();
        else
            PauseLayer::keyDown(p0);
    }

    void enterDoodleMode() {
    }
};
