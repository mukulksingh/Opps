#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

// base class
class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    int size = 3;
    //pointer use karke ShopItem ka array bana liye hai 
    ShopItem *ptr = new ShopItem [size];
    // *ptrTemp  ptr ko point kar raha initialy 
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    // ek loop chala ke ptr ko point kar raha hai 
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        // ptr se value set karta jayega 
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        //ptrTemp se value get karta jayega 
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}
