#include<iostream>
#include<vector>
using namespace std;



class Smartphone {
    public:
    // to make abstract class in cpp there is fucntion called virtual function which we have to implement
   // pure virtual function 
   virtual void TakeAselfie()=0;
   virtual void Makecall()=0;


};

// andriod me functionality kaise liya jata hai iska complexity yaha hai
class Andriod: public Smartphone {
    public:
    void TakeAselfie(){
        cout<<"Android selfie\n";

    }
    void Makecall(){
        cout<<"Android call\n";
    }


};
// iphone me selfie kaise liya jata hai iska complexity yaha hai
class Iphone: public Smartphone {
    public:
    void TakeAselfie(){
        cout<<"Iphone selfie\n";
    }

    void Makecall(){
        cout<<"Iphone call\n";
    }

};



int main() {
      // the third developer does not need to know that the 
      // isko complexity se matlab nahi hai isko bas functionality chaiye

    Smartphone* s1= new Andriod();
    s1->TakeAselfie();
    s1->Makecall();


    system("pause>0");

}

// there is first create virtual function of smartphone
// through the virtual function two functionalities implement 
// first one is selfie and second one is makecall


// there is second function andriod and and iphone which done the complexity 
//of the selfie and call 


// there is third developer who access the smartphone class does not need to know the how selfie has taken in android and iphone 
// he only know that the virtual function selfie and makecall