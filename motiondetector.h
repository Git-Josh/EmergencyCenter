#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H

class Motiondetector: public Sensor
{
public:
    Motiondetector(const double minRange, const double maxRange, const long sensorID, const std::string & vendor);
    virtual ~Motiondetector();
    double getMinRange() const;
    double getMaxRange() const;

    virtual std::string getOverview()override;

private:
    const double minRange;
    const double maxRange;
};

#endif // MOTIONDETECTOR_H
