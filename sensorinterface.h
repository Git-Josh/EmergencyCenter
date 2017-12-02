#ifndef SENSORINTERFACE_H
#define SENSORINTERFACE_H
#include <sstream>

class SensorInterface
{
public:
    //virtual ~SensorInterface()= 0;

    virtual void activateSensor()=0;
    virtual void deActivateSensor()=0;
    virtual void testSensor()=0;
    virtual std::string getOverview() const=0;
private:

};


#endif // SENSORINTERFACE_H
