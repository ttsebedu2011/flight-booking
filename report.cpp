#include "report.h"
#include <iomanip>

void Report::updateFlightInfo(FlightDetails ticket1){
    //Calculating number of flights and total amount generated a day
    noOfFlights += 1;
    grandTotal += ticket1.getCost();
}

void Report::printReport(){
    //Displaying the report

    cout << "\n\tDAILY REPORT\n"
         << "\n\tNumber of flights: \t" << noOfFlights
         << "\n\tTotal cost:\t\tE " << fixed << setprecision(2) << grandTotal
         << "\n\tCommission:\t\tE " << fixed << setprecision(2) << grandTotal * 0.1 << "\n";

}
