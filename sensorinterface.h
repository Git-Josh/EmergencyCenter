#ifndef SENSORINTERFACE_H
#define SENSORINTERFACE_H
#include <sstream>

class SensorInterface
{
public:
    virtual void activateSensor();
    virtual void deActivateSensor();
    virtual void testSensor();
    virtual std::string getOverview();
private:

};


#endif // SENSORINTERFACE_H
