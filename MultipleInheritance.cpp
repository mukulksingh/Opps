#include<iostream>
using namespace std;

// base class 1
class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};


// base class 2
class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

// base class 3
class Base3{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

// derived class from the base class 1, base class 2 and base class 3
class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};

int main()
{

    Derived harry;
    // this all are the public to public inherite so thats why public result so we can accsess outside the class
    harry.set_base1int(25);
    // this one also 
    harry.set_base2int(5);
    // this one inherite result is also public 
    harry.set_base3int(15);
    // at last call show function 
    harry.show();
    
    return 0;
}

