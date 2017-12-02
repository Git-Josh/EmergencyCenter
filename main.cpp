#include <iostream>
#include "sensorinterface.h"
#include "emergency.h"
#include "sensor.h"
#include "toxicgasdetector.h"
#include "smokedetector.h"
#include "motiondetector.h"
#include "sensorgroup.h"

int main()
{

    std::shared_ptr<SensorInterface> s1 = std::make_shared<Toxicgasdetector>(0.60, "Methane", 1, "ToonCo");
    std::shared_ptr<SensorInterface> s2 = std::make_shared<Motiondetector>(0.5, 25, 4, "MiertCo");
    std::shared_ptr<SensorInterface> s3 = std::make_shared<Smokedetector>(0.05, 7, "JoshuaCo");

    std::shared_ptr<SensorInterface> s4 = std::make_shared<Smokedetector>(0.10, 9, "BrughCo");

    std::cout << s1->getOverview()<<std::endl;
    std::cout << s2->getOverview()<<std::endl;
    std::cout << s3->getOverview()<<std::endl;
    std::cout << s4->getOverview()<<std::endl;

    std::shared_ptr<SensorGroup> g1 = std::make_shared<SensorGroup>("level 1");
    std::shared_ptr<SensorGroup> g2 = std::make_shared<SensorGroup>("level 1.1");
    g1->addSensor(s1);
    g1->addSensor(s2);
    g1->addSensor(s3);

    g2->addSensor(s4);
    g2->addSensor(s1);
    g1->addSensor(g2);

    std::cout << g1->getOverview()<<std::endl;


    return 0;
}
