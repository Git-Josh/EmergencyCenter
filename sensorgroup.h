#ifndef SENSORGROUP_H
#define SENSORGROUP_H

class SensorGroup
{
public:

    SensorGroup();

    void addSensor(SensorInterface s);

    void removeSensor(SensorInterface s);
private:
    vector sensor;

};

#endif // SENSORGROUP_H
