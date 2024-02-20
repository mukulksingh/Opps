#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
// multiple constructor run ho jayega 
// isi ko bolte hai constructor overloading 
    Complex(){
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }


    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // jo by default match hoga wahi run ho jayega multiple constructor hai na 

    Complex c1(4, 6);
    c1.printNumber();

// jaiese isme b=0 hai toh complex constructor me jo pehle b=0 hai usse match ho jayega 
    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
