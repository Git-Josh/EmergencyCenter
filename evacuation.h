#ifndef EVACUATION_H
#define EVACUATION_H

#include "emergency.h"

class Evacuation: public Emergency
{
public:
    Evacuation();
    virtual bool handleProtocol(long sensorID) const override;
};

#endif // EVACUATION_H
