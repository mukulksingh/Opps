#include<iostream>
#include<list>

using namespace std;
// create a class 
class YoutubeChannel1 {
    public:
    //attribute 
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string>Publishvideo;

 // constructor bana ke value pass kar rahay hai name and ownername
 YoutubeChannel1(string name, string OwnerName){
    // assigned initial value 
    Name= name;
    OwnerName=ownerName;
    SubscriberCount=0;

 }

 // class method to print the function
 void GetInfo(){
// we dont need anymore the object name ytChannel because we are in the class 

   // cout<<"Name;"<<ytChannel.Name<<endl;

   //object delete kar diya 
   cout<<"Name;"<<Name<<endl;


 }
};
int main(){
    //object of the class me value pass kar rahay hai
    YoutubeChannel1  ytChannel("codeBeauty", "mukul");

    // setting the object value
    // ytChannel.Name="codeBeauty";
    // ytChannel.OwnerName="mukul";
    // ytChannel.SubscriberCount="1000";
    // ytChannel.Publishvideo={"c++ is the best laguage"};
    
    //cout<<"Name;"<<ytChannel.Name<<endl;


     
     //list property ke liye loop use karna hai
    system("pause>0");

}