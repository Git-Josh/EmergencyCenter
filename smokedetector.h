#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H
class Smokedetector: public Sensor
{
public:
    Smokedetector(const double sensitivity, const long sensorID, const std::string & vendor, Emergency protocol, bool state);


private:
    const double sensitivity;
};

#endif // SMOKEDETECTOR_H
