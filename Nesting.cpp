// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods


// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private



// Nesting of member functions

// function ke andar function use kiya hai 
// private function ko public fuction ke andar use kiya hai 

#include <iostream>
#include <string>
using namespace std;

class binary
{
    // s private member of class so that we can use the every defined function in class 
private:
    string s;
    void chk_bin(void);

public:
// thono function ko define kiya hai baad me implement karenge 
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    // nesting kiya hai functio // function chae private ho ya public uska nesting kiya ja sakta hai 
    // function private se public bhi banay ja sakta hai aur public bhi banaya ja sakta hai
    // chk_bin ek private member function hai 
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}


// function ke andar function use karke private ko public bana diya
// user directly chk_bin function implement nahi kar sakta hai 
// function ke andar function(nesting) karke use karna hota hai 