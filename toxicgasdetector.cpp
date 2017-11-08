#include"toxicgasdetector.h"
#include <sstream>

Toxicgasdetector::Toxicgasdetector(const double aConcentration, const std::string & aGasType, const long sensorID, const std::string &vendor):
    Sensor(sensorID,vendor),concentration{aConcentration},gasType{aGasType}
{

}

std::string &Toxicgasdetector::getGasType() const
{
    return this->gasType;
}

double Toxicgasdetector::getConcentration() const
{
    return this->concentration;
}

void Toxicgasdetector::getOverview()
{
    std::stringstream result;
    result<<"Toxic Gas Detector:" << Sensor::getOverview() << " checks that " << this->gasType << " no higher concentration than: " << this->concentration << std::endl;
    std::cout<<result.str();
}
