#include<iostream>
using namespace std;

class Employee
{
    int id;
    // static data members
    static int count;
    // har class ke liye static data members variable same hota hai 
    // agar static data members variable nahi initialize ho toh har functio ka apna count hoga jo zero se initialize hoga 

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }





// static function hai jo sirf static data member variable ko use kar sakta hai 
    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0 aur 1000 bhi kar sakte hai 

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();

    // static function ko use karne ke liye hai (getCount)
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    // static function ko use karne ke liye
    Employee::getCount();

    lovish.setData();
    lovish.getData();

    // static function ko use karne ke liye
    Employee::getCount();

    return 0;
}