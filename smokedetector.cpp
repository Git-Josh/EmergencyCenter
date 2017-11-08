#include "sensor.h"
#include "sensorinterface.h"
#include "smokedetector.h"
#include <sstream>

Smokedetector::Smokedetector(const double aSensitivity, const long aSensorID, const std::string & aVendor):
    Sensor(aSensorID, aVendor), sensitivity{aSensitivity}
{
//    Emergency fire {};
//    protocols.push_back(fire);

//    Emergency evac {};
//    protocols.push_back(evac);
}



void Smokedetector::getOverview()
{
    std::stringstream result;
    result << "Smokedetector: " << Sensor::getOverview() << " with sensitivity = "
           << this->sensitivity.toString() << std::endl;
    std::cout << result.str();

}

const double Smokedetector::getSensitivity()
{
    return this->sensitivity;
}
