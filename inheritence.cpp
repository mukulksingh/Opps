#include <iostream>
using namespace std;

// Base Class
class Employee
{
    // default mode private hota hai isko public rakhna ha inherite karne ke liye 
public:
    int id;
    float salary;
    // function bana diya hai emplopee ka 
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    //constructor 
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
// programmer employee class se data inherite kar raha hai tabhi emplopyee ka constructor call hoga 
class Programmer : public Employee
{
public:
    int languageCode;
    // constructor bana diya jab object create kiya tab hi constructor call ho jata hai
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    // yaha pe data set kiya hai 
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    // object bana diya hai 
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    // object create kiya tab constructor call hoga 
    Programmer skillF(10);
// cout karne ke liye hai 
    cout << skillF.languageCode<<endl;
    // skillf ki id ko inherite karne ke visibility mode public hona padega 
    cout << skillF.id<<endl;
    // object ka get data
    skillF.getData();
    return 0;
}
