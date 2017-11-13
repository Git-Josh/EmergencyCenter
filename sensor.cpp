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
std::string getOverview()
{
    std::stringstream result;
    result<<"SensorId = " << this->sensorID << ", from Vendor; " << this->vendor << std::endl;
    std::cout<<result.str();
    return result;
}

