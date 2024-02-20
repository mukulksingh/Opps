#include <iostream>
#include<stack>

using namespace std;

int main(){

    string str="mukul";
    stack<char> s;
// ek stack banaya aur usko s stack me push kara duya jitna string ka lengh hai

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
// jab tak stack empty nahi hojata tak tak ans me push back karana 

    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);

        s.pop();

    }
    cout<<"answer is: "<< ans <<endl;
    return 0;
    }
     
}

