#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex o1, complex o2);
    // return (o1.a + o2.a);
};

class Complex
{
    // a, b Complex class ke private member hai
    int a, b;

    friend int calculator ::sumRealComplex(complex, complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex , complex)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the result is " << res << endl;
    return 0;
}