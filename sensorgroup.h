#ifndef SENSORGROUP_H
#define SENSORGROUP_H
#include <string>
#include <vector>
#include <memory>
#include"sensorinterface.h"

class SensorGroup : public SensorInterface
{
public:
    SensorGroup(const std::string &aName);
    ~SensorGroup();
    int addSensor(std::shared_ptr<SensorInterface> newSensor);
    virtual void activateSensor();
    virtual void deActivateSensor();
    virtual void testSensor();
    std::string getName() const;
    virtual std::string getOverview() const;

private:
    const std::string name;
    std::vector<std::shared_ptr<SensorInterface>> sensors;

};

#endif // SENSORGROUP_H
