
#include "Management.h"
#include "Details.h"
#include "Registration.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

Management::Management()
{
    mainMenu();
}

void Management::mainMenu()
{
    int menuChoice, sChoice, back;

    cout<<"\t            Hoque Airlines \n"<< endl;
    cout<<"\t____________Main Menu_________________"<< endl;

    cout <<"\t______________________________________________________" << endl;
    cout <<"\t\t\t\t\t\t\t\t|" << endl;

    cout <<"\t|\t Press 1 to add the Customer details    \t|"<< endl;
    cout <<"\t|\t Press 2 for flight registration        \t|"<< endl;
    cout <<"\t|\t Press 3 for Ticket and Charges         \t|"<< endl;
    cout <<"\t|\t Press 4 to exit                        \t|"<< endl;
    cout <<"\t\t\t\t\t\t\t\t|" << endl;
    cout <<"\t_______________________________________________________" << endl;

    cout << "Enter the choice :";
    cin>>menuChoice;

    Details userDetails;
    Registration userReg;
    Ticket userTicket;

    switch(menuChoice)
    {
        case 1:
        {
            cout <<"__________Customers_________\n"<<endl;
            userDetails.Information();
            cout <<"Press any key to go back to the Main menu ";
            cin >> back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout << "___________Book a flight using this system___________\n" << endl;
            userReg.Flights();
            break;
        }
        case 3:
        {
            cout <<"_______GET YOUR TICKET_____\n" << endl;
            userTicket.Bill();

            cout <<"Your ticket is printed, you can collect it \n" << endl;
            cout <<"Press 1 to display your ticket";

            cin >> back;

            if(back==1)
            {
                userTicket.Display();
                cout << "Press any key to go back to Main menu: ";
                cin >> back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
           cout <<"\n\n\t_________Thank-You_________"<<endl;
           break; 
        }
        default:
        {
            cout <<"Invalid input, please try again!\n" <<endl;
            mainMenu();
            break;
        }
    }


}