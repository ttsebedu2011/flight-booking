#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
    public:
        //methids and getters
        void getCustomerDetails();
        string getFirstName(){return firstname;};
        string getLastName(){return lastname;};
        string getAddress1(){return addressLine1;};
        string getAddress2(){return addressLine2;};
        string getAddress3(){return addressLine3;};
        string getClassName(){return className;};

    private: //members
         string firstname, lastname,
               addressLine1, addressLine2, addressLine3, className;

};

#endif // PERSON_H
