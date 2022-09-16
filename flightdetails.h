#ifndef FLIGHTDETAILS_H
#define FLIGHTDETAILS_H

#include "time.h"
#include "person.h"
#include<iostream>

using namespace std;

class FlightDetails
{
    public:
        //methods
        void getBoardingPassDetails();
        void printBoardingPass(Person);
        void printSummaryJourney(FlightDetails, FlightDetails, Person);
        float getCost(){return cost;};

        //members
    private:
        string depAirportName, arrAirportName;

        Time checkInTime, checkOutTime, flightTime, summaryTime;

        float cost, totalCost;

        unsigned short depDay, depMonth, depYear, arrDay, arrMonth, arrYear;

};

#endif // FLIGHTDETAILS_H
