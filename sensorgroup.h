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
    virtual ~SensorGroup();
    int addSensor(std::shared_ptr<SensorInterface> newSensor);
    virtual void activateSensor() override;
    virtual void deActivateSensor() override;
    virtual void testSensor() override;
    std::string getName() const;
    virtual std::string getOverview() const override;

private:
    const std::string name;
    std::vector<std::shared_ptr<SensorInterface>> sensors;

};

#endif // SENSORGROUP_H
