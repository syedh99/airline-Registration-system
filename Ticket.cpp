#include "Management.h"
#include "Details.h"
#include "Ticket.h"
#include "Registration.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Ticket::Bill()
{
    string destination="";
    ofstream outf("records.txt");
    {
        outf<<"_________________Hoque Airlines______________"<<endl;
        outf<<"____________________Ticket___________________"<<endl;
        outf<<"_____________________________________________"<<endl;

        outf<<"Customer ID: " <<Details::customerID<<endl;
        outf<<"Customer Name: " <<Details::customerName<<endl;
        outf<<"Customer Gender: " <<Details::customerGender<<endl;
        outf<<"\tDescription"<<endl;

        if(Registration::destinationChoice==1)
        {
            destination="Dubai";
        }
        else if(Registration::destinationChoice==2)
        {
            destination="Canada";
        }
        else if(Registration::destinationChoice==3)
        {
            destination="UK";
        }
        else if(Registration::destinationChoice==4)
        {
            destination="USA";
        }
        else if(Registration::destinationChoice==5)
        {
            destination="Australia";
        }
        else if(Registration::destinationChoice==6)
        {
            destination="India";
        }

        cout << "Destination\t\t " << destination<<endl;
        outf<<"Flight cost: \t\t" <<Registration::charges<<endl;
        

    }
    outf.close();



}

void Ticket::displayBill()
{
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File Error!"<<endl;
            }

            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }

        ifs.close();
}