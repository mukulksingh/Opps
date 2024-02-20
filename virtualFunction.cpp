#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        // virtual likhne se derived class ka member function run ho jata hai 
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){

    // base class ka pointer banaya hai 
    BaseClass * base_class_pointer;
    // base class and derived classes ka object banaya hai
    BaseClass obj_base;

    DerivedClass obj_derived;
// base class ke pointer ko derived classes ko point karaya hai 
    base_class_pointer = &obj_derived;
    // arraw function se call karene ko kaha hai display  
    // ye base class ka run kar dega jisse bachne ke liye virtual function use karte hai 
    // jab base class ka pointer derived class ke member function ko point karta hai toh base class ka member function run hota isilye virtual function use karte hai 

    base_class_pointer->display();
    return 0;
}