#include <iostream>
#include "firebrigade.h"

FireBrigade::FireBrigade(){}
bool FireBrigade::handleProtocol(long sensorID) const
{
    std::cout << "Calling the fire brigade after alarm by sensor: " << sensorID << std::endl;
    return true;
}

