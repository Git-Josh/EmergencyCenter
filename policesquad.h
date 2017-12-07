#ifndef POLICESQUAD_H
#define POLICESQUAD_H

#include "emergency.h"

class PoliceSquad: public Emergency
{
public:
    PoliceSquad();
    virtual bool handleProtocol(long sensorID) const override;
};
#endif // POLICESQUAD_H
