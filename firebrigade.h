#ifndef FIREBRIGADE_H
#define FIREBRIGADE_H

#include "emergency.h"

class FireBrigade: public Emergency
{
public:
    FireBrigade();
    virtual bool handleProtocol(long sensorID) const override;
};

#endif // FIREBRIGADE_H
