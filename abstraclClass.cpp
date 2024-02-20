#include<iostream>
using namespace std;

class CWH{
    // abstract class hai jisme pure virtual function define hota hai
    // abstract class isilye baniye jati hai ki us se derived class baniye ja sake 
    // kisi bhi object ka base class hota hai (phir usse derived class banaya jata hai extra feature add karne ke liye)
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        //pure virtual function is used to define abstract class
        // if you define virtual function of the base class then the abstract class will invoke
        // pure virtual function 
        virtual void display()=0; // do nothing function hai ye -->pure virtual function
};

// abstract class se derived class hai 
// abstract class base class  phir usse derived bana hai (extra feature add karne ke liye)
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    


int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
