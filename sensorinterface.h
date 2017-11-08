#ifndef SENSORINTERFACE_H
#define SENSORINTERFACE_H

class SensorInterface
{
public:
    virtual void activateSensor();
    virtual void deActivateSensor();
    virtual void testSensor();
    virtual void getOverview();
private:

};


#endif // SENSORINTERFACE_H
