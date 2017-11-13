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
           << this->sensitivity << std::endl;
    std::cout << result.str();

}

double Smokedetector::getSensitivity()const
{
    return this->sensitivity;
}
