#include <iostream>
#include "evacuation.h"

Evacuation::Evacuation(){}
bool Evacuation::handleProtocol(long sensorID) const
{
    std::cout << "Please evacuate the building after alarm by sensor : " << sensorID << std::endl;
    return true;
}
