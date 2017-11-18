#include "sensorgroup.h"
#include <iostream>
#include <sstream>
#include <algorithm>



SensorGroup::SensorGroup(const std::string &aName):
    name{aName}
{
    std::cout << "Calling constructor of SensorGroup with name : " << name << std::endl;
}

SensorGroup::~SensorGroup()
{
    std::cout << "Calling destructor of SensorGroup with name : " << name << std::endl;
}

void SensorGroup::activateSensor()
{
    for (const auto & aSensor : sensors)
    {
        aSensor.activateSensor();

    }
}

void SensorGroup::deActivateSensor()
{
    for (const auto & aSensor : sensors)
    {
        aSensor.deActivateSensor();

    }
}

void SensorGroup::testSensor()
{
    for (const auto & aSensor : sensors)
    {
        aSensor.testSensor();

    }
}

std::string SensorGroup::getName() const
{
    return name;
}

std::string SensorGroup::getOverview()
{
    std::stringstream result;

    for (const auto & aSensor : sensors)
    {

        result = result + aSensor.getOverview();

    }
    return result.str();
}


int SensorGroup::addSensor(std::shared_ptr<const SensorInterface> newSensor)
{
    bool found = false;
    for (auto & aSensor : sensors)
      if (aSensor == newSensor)
        {
        found = true;
        break;
        }
    if (!found)
      {
      sensors.push_back(newSensor);
      }
    else{std::cout<<"This Sensor already exists in this group"<<std::endl;}

    return sensors.size();

}
