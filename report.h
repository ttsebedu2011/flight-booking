#ifndef REPORT_H
#define REPORT_H
#include <iostream>
#include "flightdetails.h"

using namespace std;

class Report
{

    public: //constructor and methods
        Report(){noOfFlights = grandTotal = 0;};
        void updateFlightInfo(FlightDetails);
        void printReport();

    private: //members
        unsigned short noOfFlights;
        float grandTotal;
};

#endif // REPORT_H
