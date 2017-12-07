#include <iostream>
#include "policesquad.h"

PoliceSquad::PoliceSquad(){}
bool PoliceSquad::handleProtocol(long sensorID) const
{
    std::cout << "Calling the police after alarm by sensor : " << sensorID << std::endl;
    return true;
}
