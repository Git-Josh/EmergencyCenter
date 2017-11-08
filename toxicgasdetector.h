#ifndef TOXICGASDETECTOR_H
#define TOXICGASDETECTOR_H

class Toxicgasdetector: public Sensor
{
public:
    Toxicgasdetector(const double concentration, const std::string & gasType, const long sensorID, const std::string & vendor, Emergency protocol, bool state);
    const std::string & getGasType();
    const double getConcentration();

    virtual void getOverview()override;

private:
    const std::string & gasType;
    const double concentration;
};

#endif // TOXICGASDETECTOR_H
