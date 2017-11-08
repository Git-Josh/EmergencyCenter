#include "sensor.h"
#include "sensorinterface.h"

Smokedetector::Smokedetector(const double aSensitivity, const long aSensorID, const std::string & aVendor):
    Sensor(aSensorID, aVendor), sensitivity{aSensitivity}
{
    Emergency fire = new Emergency();
    protocols.push_back(fire);

    Emergency evac = new Emergency();
    protocols.push_back(evac);
}

