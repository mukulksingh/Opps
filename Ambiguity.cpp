#include<iostream>
using namespace std;


// base class 1
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};


// base class 2
class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};

// derived class hai 
class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        // ye important hai 
        Base2 :: greet();
    }
};

int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     // issi se ambiguity hota hai 
     Derived d;
     d.greet();

    return 0;
}
