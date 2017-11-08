#ifndef TOXICGASDETECTOR_H
#define TOXICGASDETECTOR_H

class Toxicgasdetector: public Sensor
{
public:
    Toxicgasdetector(const double aConcentration, const std::string & aGasType, const long sensorID, const std::string & vendor);
    std::string & getGasType() const;
    double getConcentration() const;

    virtual void getOverview()override;

private:
    const std::string & gasType;
    const double concentration;
};

#endif // TOXICGASDETECTOR_H
