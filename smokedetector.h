#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H
#include "sensor.h"
class Smokedetector: public Sensor
{
public:
    Smokedetector(const double sensitivity, const long sensorID, const std::string & vendor);
    virtual ~Smokedetector();
    double getSensitivity() const;

    virtual std::string getOverview()const override;

private:
    const double sensitivity;
};

#endif // SMOKEDETECTOR_H
