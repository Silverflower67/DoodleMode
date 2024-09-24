#ifndef DOODLELAYER_H
#define DOODLELAYER_H
#include <Geode/Geode.hpp>
using namespace geode::prelude;

class DoodleLayer : public CCLayer {
public:
  bool init();

protected:
  gd::vector<kmVec2> points;
};
#endif
