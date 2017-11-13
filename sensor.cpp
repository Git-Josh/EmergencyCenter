#include "sensor.h"
#include "sensorinterface.h"
#include <sstream>

Sensor::Sensor(const long aSensorID, const std::string & aVendor):
    sensorID{aSensorID}, vendor{aVendor}
{
    state = true;
}
Sensor::~Sensor()
{
}
void Sensor::activateSensor()
{
    state=true;
}
void Sensor::deActivateSensor()
{
    state = false;
}
void Sensor::testSensor()
{
    //if(state) notifyEmergencyCenter();

}
std::string Sensor::getOverview()
{
    std::stringstream result;
    result<<"SensorId = " << this->sensorID << ", from Vendor; " << this->vendor << std::endl;
    return result.str();;
}

