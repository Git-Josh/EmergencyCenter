#ifndef SENSORS_H
#define SENSORS_H
#include <string>
#include <emergency.h>
#include <vector>
#include <sensorinterface.h>


class Sensor : public SensorInterface
{
public:
    Sensor(const long sensorID, const std::string & vendor);
    virtual ~Sensor();

    //Getters & Setters
    long getSensorID() const;
    std::string & getVendor() const;
    Emergency getProtocol();
    bool getState();
    void notifyEmergencyCenter();

    virtual void activateSensor();
    virtual void deActivateSensor();
    virtual void testSensor();
    virtual std::string getOverview() const;

private:
    const long sensorID;
    const std::string vendor;
    std::vector<const Emergency*> protocols;
    bool state;

};

#endif // SENSORS_H
