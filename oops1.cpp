#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        // we have implemented the set data function within the employee class futher more function will be write about it.
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
// here the setData is implemented in through scope resolution 
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()  {
    // object harry is created
    Employee harry;
   // harry.a=134; we cannot direct acess the private class values 
    harry.d = 34;
    harry.e = 89;
    // through only setdata we set the value of private class 
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}

// here the concept of the public private memeber function which was defined in the class
