#include "person.h"
#include<bits/stdc++.h>

void Person::getCustomerDetails(){ //Reading in customer details
    cout << "\n\tCUSTOMER DETAILS\n";
    cout << "\n\tEnter customer's first name:\t";
    cin >> firstname;
    cout << "\n\tEnter customer's last name: \t";
    cin >> lastname;
    cout << "\n\tEnter Address Line 1:\t\t";
    cin >> addressLine1;
    cout << "\n\tEnter Address Line 2:\t\t";
    cin >> addressLine2;
    cout << "\n\tEnter Address Line 3:\t\t";
    cin >> addressLine3;
    cout << "\n\tEnter class name:\t\t";
    cin >> className;
    transform(className.begin(), className.end(), className.begin(), ::toupper);
}
