#include <iostream>
#include "flightdetails.h"
#include "report.h"

using namespace std;

int main()
{
    char answer;
    bool option = true;
    bool invalid;

    FlightDetails ticket1, ticket2, summary;
    Person customer;
    Report endOfDayReport;
    do{ //loop to input, print customer details and check if theres any more customers
        customer.getCustomerDetails();
        ticket1.getBoardingPassDetails();
        ticket1.printBoardingPass(customer);
        endOfDayReport.updateFlightInfo(ticket1);

        cout << ("\n\tENTER SECOND BOARDING PASS DETAILS\n");
        ticket2.getBoardingPassDetails();
        ticket2.printBoardingPass(customer);
        endOfDayReport.updateFlightInfo(ticket2);

        summary.printSummaryJourney(ticket1, ticket2, customer);

        do{ //loop to check if the input is valid
        invalid = false;
        cout << "\n\tAny more customers, please enter Y/N: ";
        cin >> answer;

        if(toupper(answer) == 'Y')
           option = true;

        else if(toupper(answer) == 'N')
            option = false;

        else{
            cout << "\n\tError!!! Please enter Y/N\n";
            invalid = true;
        }
        }while(invalid);
    }while(option == true);

        endOfDayReport.printReport(); //print end of day report

    return 0;
}
