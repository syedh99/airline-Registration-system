#include "Management.h"
#include "Details.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Details::Information()
{
    cout <<"\nEnter the customer ID: ";
    cin>>customerID;

    cout <<"\nEnter your name: ";
    cin >> customerName;

    cout <<"\nEnter your age: ";
    cin >> customerAge;

    cout <<"\nEnter your Address: ";
    cin >> customerAddress;

    cout <<"\nEnter your gender: ";
    cin >> customerGender;

    cout<<"Your details are saved with us!\n"<<endl;
}