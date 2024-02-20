#include <iostream>
using namespace std;

class Employee
{ 
    // salary default private 
    int id;
    int salary;

public:
    void setId(void)
    {
        // here we access the private member variables
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    
    // four employee data according to the loop will be set or get
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
