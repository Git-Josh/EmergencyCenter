#include "sensor.h"
#include "sensorinterface.h"
#include "motiondetector.h"
#include <sstream>

Motiondetector::Motiondetector(const double minRange, const double maxRange, const double sensitivity, const long sensorID, const std::string &vendor, Emergency protocol, bool state):
    Sensor(aSensorID, aVendor), minRange{aMinRange}, maxRange{aMaxRange}, sensitivity{aSensitivity}

{

}

double Motiondetector::getMinRange() const
{
    return this->minRange;
}

double Motiondetector::getMaxRange() const
{
    return this->maxRange;
}

void Motiondetector::getOverview()
{
    std::stringstream result;
    result << "MotionDetector: " << Sensor::getOverview() << " with sensitivity = "
           << this->sensitivity.toString() << " ranging from " << this->minRange.toString()<< " till "
           << this->maxRange.toString() << std::endl;
    std::cout << result.str();
}
