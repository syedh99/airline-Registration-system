#ifndef TICKET_H
#define TICKET_H

#include <string>
using namespace std;

class Ticket:public Details, Registration
{
    public:
    void Bill();
    void displayBill();

};

#endif 