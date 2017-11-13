#include "sensor.h"
#include "sensorinterface.h"
#include "motiondetector.h"
#include <sstream>

Motiondetector::Motiondetector(const double minRange, const double maxRange, const long sensorID, const std::string &vendor):
    Sensor(sensorID, vendor), minRange{minRange}, maxRange{maxRange}
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

std::string Motiondetector::getOverview()
{
    std::stringstream result;
    result << "MotionDetector: " << Sensor::getOverview() << " ranging from " << this->minRange<< " till "
           << this->maxRange << std::endl;
    return result.str();
}
