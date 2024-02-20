 #include<iostream>
using namespace std;

int main(){
    // Basic Example
    // a ki value 4 hai 
    int a = 4;
    // * ptr a ka address store kar raha hai 
    int* ptr = &a;

    // *(ptr) use address pe jo rahta hai uska uska value 
    cout<<"The value of a is "<<*(ptr)<<endl;
  
    return 0;
}

#include<iostream>
using namespace std;


int main(){

    // isi tarah ek *p pointer banaya jo float ka address store kar raha hai
    float *p = new float(40.78);
    // *p means usse address pe jo rehta hai uska value batana hai
    cout << "The value at address p is " << *(p) << endl;
    
    return 0;
}


#include<iostream>
using namespace std;

int main(){
  
  // *arr ka pointer hai jo array create kar raha hai 
    int *arr = new int[3];
    arr[0] = 10;
    // *arr ka address hai uske +1 par jo hai uska value 
    *(arr+1) = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
