#ifndef SENSORINTERFACE_H
#define SENSORINTERFACE_H
#include <sstream>
#include <memory>
#include "emergency.h"

class SensorInterface
{
public:
    virtual void activateSensor()=0;
    virtual void deActivateSensor()=0;
    virtual void testSensor()const=0;
    virtual void addProtocol(std::shared_ptr<Emergency> e)=0;
    virtual std::string getOverview() const=0;
private:

};


#endif // SENSORINTERFACE_H
