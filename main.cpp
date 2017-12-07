#include <iostream>
#include "sensorinterface.h"
#include "emergency.h"
#include "firebrigade.h"
#include "evacuation.h"
#include "policesquad.h"
#include "sensor.h"
#include "toxicgasdetector.h"
#include "smokedetector.h"
#include "motiondetector.h"
#include "sensorgroup.h"

int main()
{
    std::shared_ptr<Emergency> fire = std::make_shared<FireBrigade>();
    std::shared_ptr<Emergency> evac = std::make_shared<Evacuation>();
    std::shared_ptr<Emergency> pol = std::make_shared<PoliceSquad>();

    std::shared_ptr<SensorInterface> s1 = std::make_shared<Toxicgasdetector>(0.60, "Methane", 1, "ToonCo");
    std::shared_ptr<SensorInterface> s2 = std::make_shared<Motiondetector>(0.5, 25, 4, "MiertCo");
    std::shared_ptr<SensorInterface> s3 = std::make_shared<Smokedetector>(0.05, 7, "JoshuaCo");
    std::shared_ptr<SensorInterface> s4 = std::make_shared<Smokedetector>(0.10, 9, "BrughCo");

    s1->addProtocol(evac);
    s1->addProtocol(fire);
    s2->addProtocol(pol);

    std::cout << s1->getOverview()<<std::endl;
    std::cout << s2->getOverview()<<std::endl;
    std::cout << s3->getOverview()<<std::endl;
    std::cout << s4->getOverview()<<std::endl;

    std::shared_ptr<SensorGroup> g1 = std::make_shared<SensorGroup>("level 1");
    std::shared_ptr<SensorGroup> g2 = std::make_shared<SensorGroup>("level 2");
    std::shared_ptr<SensorGroup> b1 = std::make_shared<SensorGroup>("building 1");

    g1->addSensor(s1);
    g1->addSensor(s2);

    g2->addSensor(s3);
    g2->addSensor(s4);

    g2->addProtocol(evac);
    g2->addProtocol(fire);

    b1->addSensor(g1);
    b1->addSensor(g2);

    std::cout << b1->getOverview()<<std::endl;

    std::cout << "\tdoing tests on a sensor" << std::endl;

    s1->activateSensor();
    s1->testSensor();
    s1->deActivateSensor();
    s1->testSensor();

    std::cout << "\tdoing tests on a group" << std::endl;

    b1->activateSensor();
    b1->testSensor();
    b1->deActivateSensor();
    b1->testSensor();


    return 0;
}
