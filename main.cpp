#include <iostream>
#include <sensorinterface.h>
#include <emergency.h>
#include <sensor.h>
#include <toxicgasdetector.h>
#include <smokedetector.h>
#include <motiondetector.h>

using namespace std;

int main()
{
    Toxicgasdetector s1(0.60, "Methane", 01, "ToonCo");
    Toxicgasdetector s2(0.25, "Pentane", 02, "ToonCo");
    Toxicgasdetector s3(0.55, "Methane", 03, "JoshuaCo");
    Motiondetector s4(0.5, 25, 04, "MiertCo");
    Motiondetector s5(0.25, 30, 05, "ToonCo");
    Motiondetector s6(0.1, 40, 06, "MiertCo");
    Smokedetector s7(0.05, 07, "JoshuaCo");
    Smokedetector s8(0.02, 10, "MiertCo");
    cout << s2.getOverview()<<endl;


    cout << "Hello World!" << endl;
    return 0;
}
