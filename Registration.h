#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>
using namespace std;

class Registration:public Management
{
    public:
    static int destinationChoice;
    int flightChoice, back;
    static float charges;

    void Flights();
};

#endif 