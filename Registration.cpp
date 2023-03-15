#include "Management.h"
#include "Details.h"
#include "Registration.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Registration::Flights()
{
    string flightsN[]={"Dubai","Canada","UK","USA","Australia","India"};

    for(int i=0;i<flightsN->length();i++)
    {
        cout<<(i+1)<<" Flight to " << flightsN[i] << endl;
    }

    cout<<"\nWelcome to the Airlines!"<<endl;
    cout <<"Press the number of the country you wish to fly to: ";
    cin >> destinationChoice;

    switch(destinationChoice)
    {
        case 1:
        {
            cout <<"_____________Welcome to Dubai Emirates______________\n"<<endl;
            cout <<"Your comfort is our priority, Enjoy the flight :) " << endl;
            cout <<"Following are the flights \n"<< endl;

            cout <<"1. DUB - 498"<<endl;
            cout <<"\t03-15-2023 8:00am 10hours $257.00" << endl;

            cout <<"2. DUB - 658"<<endl;
            cout <<"\t03-15-2023 11:00am 10.5hours $317.00" << endl;

            cout <<"3. DUB - 558"<<endl;
            cout <<"\t03-15-2023 2:00pm 07hours $337.00" << endl;

            cout <<"\nSelect the flight you want to book: ";
            cin >> flightChoice;

            if(flightChoice==1)
            {
                charges=257;
                cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==2)
            {
                charges=317;
                cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==3)
            {
                charges=337;
                cout<<"\nYou have successfully booked the flight DUB - 558"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else
            {
                cout<<"Invalid input, shifting to the previous menu" << endl;
                Flights();
            }

            cout <<"Press any key to go back Main menu: ";
            cin >> back;

            if(back==1)
            {
                Management::mainMenu();
            }
            else
            {
                Management::mainMenu();
            }

        }
        case 2:
        {
            cout <<"_____________Welcome to Air Canada______________\n"<<endl;
            cout <<"Your comfort is our priority, Enjoy the flight :) " << endl;
            cout <<"Following are the flights \n"<< endl;

            cout <<"1. CAN - 498"<<endl;
            cout <<"\t03-15-2023 8:00am 3hours $89.00" << endl;

            cout <<"2. CAN - 658"<<endl;
            cout <<"\t03-15-2023 11:00am 4.5hours $56.00" << endl;

            cout <<"3. CAN - 558"<<endl;
            cout <<"\t03-15-2023 2:00pm 3.5hours $76.00" << endl;

            cout <<"\nSelect the flight you want to book: ";
            cin >> flightChoice;

            if(flightChoice==1)
            {
                charges=90;
                cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==2)
            {
                charges=56;
                cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==3)
            {
                charges=76;
                cout<<"\nYou have successfully booked the flight DUB - 558"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else
            {
                cout<<"Invalid input, shifting to the previous menu" << endl;
                Flights();
            }

            cout <<"Press any key to go back Main menu: ";
            cin >> back;

            if(back==1)
            {
                Management::mainMenu();
            }
            else
            {
                Management::mainMenu();
            }
        }
        case 3:
        {
            cout <<"_____________Welcome to Royal Airlines______________\n"<<endl;
            cout <<"Your comfort is our priority, Enjoy the flight :) " << endl;
            cout <<"Following are the flights \n"<< endl;

            cout <<"1. UK - 498"<<endl;
            cout <<"\t03-15-2023 8:00am 10hours $157.00" << endl;

            cout <<"2. UK - 658"<<endl;
            cout <<"\t03-15-2023 11:00am 10.5hours $217.00" << endl;

            cout <<"3. UK - 558"<<endl;
            cout <<"\t03-15-2023 2:00pm 07hours $237.00" << endl;

            cout <<"\nSelect the flight you want to book: ";
            cin >> flightChoice;

            if(flightChoice==1)
            {
                charges=157;
                cout<<"\nYou have successfully booked the flight UK - 498"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==2)
            {
                charges=217;
                cout<<"\nYou have successfully booked the flight UK - 658"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==3)
            {
                charges=237;
                cout<<"\nYou have successfully booked the flight UK - 558"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else
            {
                cout<<"Invalid input, shifting to the previous menu" << endl;
                Flights();
            }

            cout <<"Press any key to go back Main menu: ";
            cin >> back;

            if(back==1)
            {
                Management::mainMenu();
            }
            else
            {
                Management::mainMenu();
            }
        }
        case 4:
        {
            cout <<"_____________Welcome to United Airlines______________\n"<<endl;
            cout <<"Your comfort is our priority, Enjoy the flight :) " << endl;
            cout <<"Following are the flights \n"<< endl;

            cout <<"1. USA - 498"<<endl;
            cout <<"\t03-15-2023 8:00am 03hours $107.00" << endl;

            cout <<"2. USA - 658"<<endl;
            cout <<"\t03-15-2023 11:00am 3.5hours $97.00" << endl;

            cout <<"3. USA - 558"<<endl;
            cout <<"\t03-15-2023 2:00pm 04hours $117.00" << endl;

            cout <<"\nSelect the flight you want to book: ";
            cin >> flightChoice;

            if(flightChoice==1)
            {
                charges=107;
                cout<<"\nYou have successfully booked the flight USA - 498"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==2)
            {
                charges=97;
                cout<<"\nYou have successfully booked the flight USA - 658"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==3)
            {
                charges=117;
                cout<<"\nYou have successfully booked the flight USA - 558"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else
            {
                cout<<"Invalid input, shifting to the previous menu" << endl;
                Flights();
            }

            cout <<"Press any key to go back Main menu: ";
            cin >> back;

            if(back==1)
            {
                Management::mainMenu();
            }
            else
            {
                Management::mainMenu();
            }
        }
        case 5:
        {
            cout <<"_____________Welcome to Australia Air______________\n"<<endl;
            cout <<"Your comfort is our priority, Enjoy the flight :) " << endl;
            cout <<"Following are the flights \n"<< endl;

            cout <<"1. AUS - 498"<<endl;
            cout <<"\t03-15-2023 8:00am 10hours $207.00" << endl;

            cout <<"2. AUS - 658"<<endl;
            cout <<"\t03-15-2023 11:00am 10.5hours $256.00" << endl;

            cout <<"3. AUS - 558"<<endl;
            cout <<"\t03-15-2023 2:00pm 07hours $337.00" << endl;

            cout <<"\nSelect the flight you want to book: ";
            cin >> flightChoice;

            if(flightChoice==1)
            {
                charges=207;
                cout<<"\nYou have successfully booked the flight AUS - 498"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==2)
            {
                charges=256;
                cout<<"\nYou have successfully booked the flight AUS - 658"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==3)
            {
                charges=337;
                cout<<"\nYou have successfully booked the flight AUS - 558"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else
            {
                cout<<"Invalid input, shifting to the previous menu" << endl;
                Flights();
            }

            cout <<"Press any key to go back Main menu: ";
            cin >> back;

            if(back==1)
            {
                Management::mainMenu();
            }
            else
            {
                Management::mainMenu();
            }
        }
        case 6:
        {
            cout <<"_____________Welcome to Air India______________\n"<<endl;
            cout <<"Your comfort is our priority, Enjoy the flight :) " << endl;
            cout <<"Following are the flights \n"<< endl;

            cout <<"1. IND - 498"<<endl;
            cout <<"\t03-15-2023 8:00am 10hours $437.00" << endl;

            cout <<"2. IND - 658"<<endl;
            cout <<"\t03-15-2023 11:00am 10.5hours $497.00" << endl;

            cout <<"3. IND - 558"<<endl;
            cout <<"\t03-15-2023 2:00pm 07hours $537.00" << endl;

            cout <<"\nSelect the flight you want to book: ";
            cin >> flightChoice;

            if(flightChoice==1)
            {
                charges=437;
                cout<<"\nYou have successfully booked the flight IND - 498"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==2)
            {
                charges=497;
                cout<<"\nYou have successfully booked the flight IND - 658"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else if(flightChoice==3)
            {
                charges=537;
                cout<<"\nYou have successfully booked the flight IND - 558"<<endl;
                cout <<"You can go back to the menu and collect your ticket"<<endl;
            }
            else
            {
                cout<<"Invalid input, shifting to the previous menu" << endl;
                Flights();
            }

            cout <<"Press any key to go back Main menu: ";
            cin >> back;

            if(back==1)
            {
                Management::mainMenu();
            }
            else
            {
                Management::mainMenu();
            }
        }
        default:
        {
            cout <<"Invalid input, going back to Main menu "<< endl;
            Management::mainMenu();
            break;

        }
    }

}