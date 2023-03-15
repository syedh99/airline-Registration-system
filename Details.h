#ifndef DETAILS_H
#define DETAILS_H

#include <string>
using namespace std;

class Details
{
    public:

    static string customerName, customerGender;
    int phoneNumber, customerAge;
    string customerAddress;
    static int customerID;
    char arr[100];

    void Information();

};

#endif 
