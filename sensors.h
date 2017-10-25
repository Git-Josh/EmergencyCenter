#ifndef SENSORS_H
#define SENSORS_H
#include <string>
#include <emergency.h>


class Sensor
{
public:
    Sensor(const long sensorID, const std::string & vendor, Emergency protocol, bool state);
    virtual ~Sensor();

    //Getters & Setters
    long getSensorID() const;
    std::string & getVendor() const;
    Emergency getProtocol();
    bool getState();

private:
    const long sensorID;
    const std::string & vendor;
    Emergency protocol;
    bool state;

};

#endif // SENSORS_H
