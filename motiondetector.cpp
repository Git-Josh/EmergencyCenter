#include "sensor.h"
#include "sensorinterface.h"
#include "motiondetector.h"
#include <sstream>

Motiondetector::Motiondetector(const double minRange, const double maxRange, const long sensorID, const std::string &vendor):
    Sensor(sensorID, vendor), minRange{minRange}, maxRange{maxRange}
{

}

Motiondetector::~Motiondetector()
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

std::string Motiondetector::getOverview() const
{
    std::stringstream result;
    result << "Motion Detector: " << Sensor::getOverview() << " ranging from " << this->minRange<< " till "
           << this->maxRange << std::endl;
    return result.str();
}
