#ifndef EDGECOORD_H
#define EDGECOORD_H
#include "specialcoord.h"

class EdgeCoord: public SpecialCoord {
    public:
    Coords getCoords() override;
};

#endif

