#include<iostream>
using namespace std;

class Base{
    // protected hai
    protected:
        int a; 
    private:
        int b;

};
// protected ko protected se access karenge tab jake bhi protected rehaega tab hum a ko class ke bhar access nahi kar sakte hai 
class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // class ke bahar access nahi kar sakte hai 
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

