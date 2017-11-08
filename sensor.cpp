#include "sensor.h"
#include "sensorinterface.h"

Sensors::Sensors(const long aSensorID, const std::string & aVendor):
    sensorID{aSensorID}, vendor{aVendor}
{
    state = true;
}
void activateSensor()
{
    state = true;
}
void deActivateSensor()
{
    state = false;
}
void testSensor()
{
    if(state) notifyEmergencyCenter();

}

