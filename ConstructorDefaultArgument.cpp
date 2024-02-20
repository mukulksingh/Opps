#include<iostream>
using namespace std;

class Simple{
    // constructor with default arguments 
    int data1;
    int data2;
    int data3;

    public:
    Simple(int a, int b, int c){
        // constructor is created and its value set to the constructor default value 
    data1=a;
    data2=b;
    data3=c;
}

    void printNumber();

    
};

void Simple ::printNumber(){
    cout<<data1<<" "<<data2<<" "<<data3<<endl;
}

int main(){
    Simple s(1,2,3);
    s.printNumber();
    return 0;
}