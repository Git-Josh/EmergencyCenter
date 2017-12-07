#ifndef SENSORS_H
#define SENSORS_H
#include <string>
#include <memory>
#include <vector>
#include "emergency.h"
#include "sensorinterface.h"


class Sensor : public SensorInterface
{
public:
    Sensor(const long sensorID, const std::string & vendor);
    virtual ~Sensor();

    //Getters & Setters
    long getSensorID() const;
    std::string & getVendor() const;
    bool getState();

    virtual void activateSensor() override;
    virtual void deActivateSensor()override;
    virtual void testSensor() const override;
    virtual void addProtocol(std::shared_ptr<Emergency> e) override;
    virtual std::string getOverview() const;

private:
    const long sensorID;
    const std::string vendor;
    std::vector<std::shared_ptr<Emergency>> protocols;
    bool state;

};

#endif // SENSORS_H
