#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    // automatically call ho jata hai jab hum class create karte hai 
    // example jaiese ki complex c1 c2 c3 object  call kar rahay hai toh complex constructor ka value a and b le raha hai aur void print number me de raha hai 



// yaha par declare kiya hai 
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// implement yaha pe kiya hai 
Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    // cout<<"Hello world";
}

int main()
{
    // c1 c2 c3 objects create kiya hai 
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
// it shold be declared in the public section of the class
// whenever object is created the constructor invoked
// they can not hive any return types 
//it have default argument 