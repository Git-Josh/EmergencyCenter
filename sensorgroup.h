#ifndef SENSORGROUP_H
#define SENSORGROUP_H
#include"sensorinterface.h"

class SensorGroup
{
public:
    SensorGroup();
    void addSensor( std::shared_ptr<SensorInterface> s);

private:
    vector sensors;

};

#endif // SENSORGROUP_H
