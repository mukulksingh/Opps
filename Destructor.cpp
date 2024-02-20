#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
    // constructor banaya public class ke andar 
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }
// destructur banaya taki turente destroy ho jaye constructor class
        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};


int main(){
    // first ye dono print honge 
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    // first create object then constructor called hoga 
    num n1;
    {
        //phir ye print honge 
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        // phir n1 and n2 ka constructor called hoga 
        num n2, n3;
        // phir ye print hoga 
        cout<<"Exiting this block"<<endl;
    }
    // jaiese hi block se bahar aa jayega tab n2 and n3 ka destructor called hoga 
    // phir ye print hoga 
    cout<<"Back to main"<<endl;
    // n1 ka destructor called hoga 
    return 0;
}
