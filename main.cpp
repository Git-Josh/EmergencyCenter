#include <iostream>
#include <sensorinterface.h>
#include <emergency.h>
#include <sensor.h>
#include <toxicgasdetector.h>
#include <smokedetector.h>
#include <motiondetector.h>
#include <sensorgroup.h>

int main()
{

    std::shared_ptr<SensorInterface> s1 = std::make_shared<Toxicgasdetector>(0.60, "Methane", 01, "ToonCo");
    std::shared_ptr<SensorInterface> s2 = std::make_shared<Motiondetector>(0.5, 25, 04, "MiertCo");
    std::shared_ptr<SensorInterface> s3 = std::make_shared<Smokedetector>(0.05, 07, "JoshuaCo");


    std::cout << s1->getOverview()<<std::endl;
    std::cout << s2->getOverview()<<std::endl;
    std::cout << s3->getOverview()<<std::endl;
/*
    std::shared_ptr<const SensorInterface> g1 = std::make_shared<const SensorGroup>{"level1"};
    g1.addSensor(s1);
    g1.addSensor(s2);
    g1.addSensor(s3);

    std::cout << g1->getOverview()<<std::endl;
    */

    return 0;
}
