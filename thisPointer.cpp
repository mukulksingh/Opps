//this is a keyword which is a pointer which points to the object which invokes the memeber function
// this is pointer jisne member function ko call kiya hai
#include<iostream>
using namespace std;
class A{
    // clas variable name a
    int a;
    public:
    // member function argument name is also a
    // so that we use the this pointer 
        void setData(int a){
            // this is a keyword which is pointer which points to the objects which onvoke the member function 
            // uss object par point karta hai jisne member function ko call kiya hai 
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}


// type II
class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}
