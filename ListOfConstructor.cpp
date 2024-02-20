#include<iostream>

using namespace std;

class Test
{
    // yaha pe order a hai phir uske baad b hai 
    int a;
    int b;

public:
// jiska order pehle hota hai wahi pehle execute hota hai 
    Test(int i, int j) : a(i), b(j)


    //Test(int i, int j) : b(i), a(j)// agar b pehle baad me a  ye karte hai tab error through karega kyuki pehle order upar a phir uske baad b hai

    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}