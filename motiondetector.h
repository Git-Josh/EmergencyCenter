#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H
class Motiondetector: public Sensor
{
public:
    Motiondetector(const double minRange, const double maxRange,const double sensitivity, const long sensorID, const std::string & vendor, Emergency protocol, bool state);
    const double getMinRange();
    const double getMaxRange();

    virtual std::string getOverview()override;

private:
    const double minRange;
    const double maxRange;
};

#endif // MOTIONDETECTOR_H
