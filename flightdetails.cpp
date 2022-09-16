#include "flightdetails.h"
#include <iomanip>
#include "time.h"
#include<bits/stdc++.h>

using namespace std;

void FlightDetails::printBoardingPass(Person customer){ //Print Boarding Pass details

    cout << "\n\tBOARDING PASS: " << customer.getFirstName() << " " << customer.getLastName()
         << "\tCLASS: " << customer.getClassName() << "\tCOST: E " << fixed << setprecision(2) << cost << "\n"
         << "\n\tFROM\t\t\t" << "DATE\t\t\t" << "TIME"
         << "\n\t" << depAirportName << "\t\t\t" << setfill('0') << setw(2) << depDay << "/" << setw(2) << depMonth << "/" << depYear << "\t\t"
         << setw(2) << checkInTime.getHour() << ":" << setw(2) << checkInTime.getMinute() << "\n"
         << "\n\tTO"
         << "\n\t" << arrAirportName << "\t\t\t" << setw(2) << arrDay << "/" << setw(2) << arrMonth << "/" << arrYear << "\t\t"
         << setw(2) << checkOutTime.getHour() << ":" << setw(2) << checkOutTime.getMinute() << "\n"
         << "\n\tEXPECTED FLIGHT TIME:\t" << setw(2) << flightTime.getHour() << "H " << setw(2) << flightTime.getMinute() << "M\n";

}

void FlightDetails::printSummaryJourney(FlightDetails ticket1, FlightDetails ticket2, Person customer){//Print summary journey

    totalCost = ticket1.cost + ticket2.cost; //Add boarding pass costs

    summaryTime = ticket2.checkOutTime - ticket1.checkInTime; //Calculate total time for the journey

    cout << "\n\tLDF TRAVEL\n" //print summary journey
         << "\n\tName:  \t" << customer.getFirstName() << " " << customer.getLastName() << "\n"
         <<  "\n\tAddress: " << customer.getAddress1() << "\n\t\t "
         << customer.getAddress2() << "\n\t\t " << customer.getAddress3() << "\n"
         << "\n\tREF:  \t" << ticket1.depAirportName << "/" << ticket2.arrAirportName << "\n"
         << "\n\tDear " << customer.getFirstName() << "," << "\n"
         << "\n\tPlease find enclosed your boarding passes for your flight from "
         << ticket1.depAirportName << " to " << ticket2.arrAirportName << "." << "\n"
         << "\n\tYour journey is as follows: " << "\n"
         << "\n\tSUMMARY OF JOURNEY" << "\n"
         << "\n\tNAME: " << customer.getFirstName() << " " << customer.getLastName()
         << "\tCLASS: " << customer.getClassName() << "\t\tCOST: E " << fixed << setprecision(2) << totalCost << "\n"
         << "\n\tFROM\t\t\t" << "DATE\t\t\t" << "TIME"
         << "\n\t" << ticket1.depAirportName << "\t\t\t" << setfill('0')  << setw(2) << ticket1.depDay << "/"  << setw(2) << ticket1.depMonth << "/"  << setw(2) << ticket1.depYear << "\t\t"
         << setw(2) << ticket1.checkInTime.getHour() << ":" << setw(2) << ticket1.checkInTime.getMinute() << "\n"
         << "\n\tTO"
         << "\n\t" << ticket2.arrAirportName << "\t\t\t"  << setw(2) << ticket2.arrDay << "/"  << setw(2) << ticket2.arrMonth << "/"  << setw(2) << ticket2.arrYear << "\t\t"
         << setw(2) << ticket2.checkOutTime.getHour() << ":" << setw(2) << ticket2.checkOutTime.getMinute() << "\n";

         unsigned short noOfDays = ticket2.arrDay - ticket1.depDay;
         if(noOfDays >= 1)
            cout << "\n\tTOTAL TIME:\t" << setw(2) << summaryTime.getHour() + (24 * noOfDays) << "H " << setw(2) << summaryTime.getMinute() << "M\n";
                else
            cout << "\n\tTOTAL TIME:\t" << setw(2) << summaryTime.getHour() << "H " << setw(2) << summaryTime.getMinute() << "M\n";
         cout << "\n\tThank you for booking with LDF and we look forward to doing business with you again.\n"
              << "\n\tqueries@ldf.ie   \twww.lef.ie\t\t021-123456\t\twww.facebook.com/ldf\n";
}

void FlightDetails::getBoardingPassDetails(){ //Rading in boarding pass details
    unsigned short anHour, aMinute;
    char ch;

    cout << "\n\tEnter Flight Cost: \t\t";
    cin >> cost;
    cout << "\n\tEnter departure airport: \t";
    cin >> depAirportName;
    transform(depAirportName.begin(), depAirportName.end(), depAirportName.begin(), ::toupper);

    cout << "\n\tEnter arrival airport: \t\t";
    cin >> arrAirportName;
    transform(arrAirportName.begin(), arrAirportName.end(), arrAirportName.begin(), ::toupper);

    cout << "\n\tEnter departure date dd/mm/yyyy:";
    cin >> depDay >> ch >> depMonth >> ch >> depYear;
    cout << "\n\tEnter arrival date dd/mm/yyyy:  ";
    cin >> arrDay >> ch >> arrMonth >> ch >> arrYear;

    cout << "\n\tEnter customer's check-in time: ";
    cin >> anHour >> ch >> aMinute;
    checkInTime.setHour(anHour);
    checkInTime.setMinute(aMinute);

    cout << "\n\tEnter customer's check-out time:";
    cin >> anHour >> ch >> aMinute;
    checkOutTime.setHour(anHour);
    checkOutTime.setMinute(aMinute);

    flightTime = checkOutTime - checkInTime; // Calculating the flight time

}





