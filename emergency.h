#ifndef EMERGENCY_H
#define EMERGENCY_H

class Emergency
{
public:
    virtual bool handleProtocol(long sensorID) const=0;
};

#endif // EMERGENCY_H
