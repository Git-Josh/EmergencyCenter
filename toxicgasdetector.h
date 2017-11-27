#ifndef TOXICGASDETECTOR_H
#define TOXICGASDETECTOR_H
#include "sensor.h"
#include<string>

class Toxicgasdetector: public Sensor
{
public:
    Toxicgasdetector(const double aConcentration, const std::string & aGasType, const long sensorID, const std::string & vendor);
    virtual ~Toxicgasdetector();
    std::string getGasType() const;
    double getConcentration() const;

    virtual std::string getOverview() const override;

private:    
    const double concentration;
    const std::string gasType;
};

#endif // TOXICGASDETECTOR_H
