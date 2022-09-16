#include "time.h"

Time Time::operator- (Time operand2){//Calculating Time
    Time timeResult;

    unsigned short checkOut = this->hour * 60 + this->minute, //turning hours into minutes
                   checkIn = operand2.hour * 60 + operand2.minute,
                   timeDifference = checkOut - checkIn; // difference between check in and checkout time

    timeResult.hour = timeDifference / 60; // turn minutes back into hours
    timeResult.minute = timeDifference % 60; // calculate how many minutes left after calculating the hours

    return timeResult;
}


