
#include<iostream>
#include<vector>
#include<string>
void print (int arr[], int size, int n){

    //base case
    if(n==0)
    return ;

    //cout <<n<<" ";
    //recursive call

    print (n - 1);

   // cout<<n<<" "<<endl;


}


int factorial(int arr[], int n){
    //base case
    if(n==0)
    return ;

    int ans=n*factorial(n-1);
    return ans;
}