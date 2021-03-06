#include"toxicgasdetector.h"
#include <sstream>

Toxicgasdetector::Toxicgasdetector(const double aConcentration, const std::string & aGasType, const long sensorID, const std::string &vendor):
    Sensor(sensorID,vendor),concentration{aConcentration},gasType{aGasType}
{

}
Toxicgasdetector::~Toxicgasdetector()
{

}
std::string Toxicgasdetector::getGasType() const
{
    return this->gasType;
}

double Toxicgasdetector::getConcentration() const
{
    return this->concentration;
}

std::string Toxicgasdetector::getOverview() const
{
    std::stringstream result;
    result<<"Toxic Gas Detector: " << Sensor::getOverview() << " checks that the " << this->gasType << " concentration is not higher than: " << this->concentration << std::endl;
    return result.str();
}
