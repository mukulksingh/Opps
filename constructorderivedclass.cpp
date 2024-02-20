/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include<iostream>
#include<string>


using namespace std;

// base class 1 banaya 
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

// base class 2 banya 
class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};
// base class 1 and base class 2 se derived class banaya 
// ji order me likha hoga usi order me constructor call hoga 



// for example base1 ka constructor pehle call hoga phir baad me base2 ka constructor call hoga 
// class Derived: public Base1, public Base2{


   // isme pehle virtual class base1 ka constructor call hoga phir baad me base2 ka constructor 
//class Derived: public Base2, public virtual Base1{

// for example base2 ka constructor pehle call hoga phir base1 ka constructor baad me call hoga 
    class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
    // total four private data members hai isiliye a ,b,c,d private data members derived kiye hai 
    // ek derived1, derived2, data1 and data2 ke liye 
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
        {
            derived1 = a;
            derived2 = b;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};

int main(){
    Derived harry(1, 2, 3, 4);
    // public calss me assign hai isilye isko call kar sakte hai
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}


