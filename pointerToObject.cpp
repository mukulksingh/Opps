#include<iostream>
using namespace std;

class Complex{

    // default private 
    int real, imaginary;
    public:
    // print karke dega 
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    //pointer se object banane ka synatx 
    Complex *ptr = new Complex;
    // dreference karke value print karna hai
    (*ptr).setData(1, 54); //is exactly same as
    (*ptr).getData(); //is as good as 

    return 0;
}


//arrow function 
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    // pointer se object banana 
    Complex *ptr = new Complex;
    // arrow operator (ptr complex object ko point kar raha hai)
    ptr->setData(1, 54);
    // ptr complex object ke getData ko point kar raha hai
    ptr->getData(); 

    // Array of Objects (size)
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}
