#ifndef TIME_H
#define TIME_H


class Time
{
    public: //methods and getters
        void setHour(unsigned short h){hour = h;};
        void setMinute(unsigned short m){minute = m;};
        unsigned short getHour(){return hour;};
        unsigned short getMinute(){return minute;};
        Time operator-(Time);

    private: //members
        unsigned short hour , minute;
};

#endif // TIME_H
