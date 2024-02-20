#include<iostream>
#include<vector>

using namespace std;

int solve(int n,int a,int b,int c) {
    //base case
    if(n==0) {
        return 1;
    }
    if(n<0){
        return INT_MIN;
    }
  int first=solve(n-a,a,b,c);
  int second=solve(n-b,a,b,c);
  int third=solve(n-c,a,b,c);

  return 1 + max(first, max(second , third));
}


    // memoization function
    int solveMem(int n,int a,int b,int c,vector<int> &dp){
        //base case
    if(n==0) {
        return 1;
    }
    if(n<0){
        return INT_MIN;
    }
    //step 3
     if(dp[n]!=-1){
        return dp[n];


    }

    int first=solve(n-a,a,b,c, dp);
  int second=solve(n-b,a,b,c, dp);
  int third=solve(n-c,a,b,c, dp);
//step 2
  return dp[n]=1 + max(first, max(second , third));
       
    }


int main(){

    int n=17;
    int a=10;
    int b=11;
    int c=3;
// step 1
    vector<int> &dp(n+1, -1);
    int ans= solveMem(n,a,b,c,dp);
    if(ans <= 0){
        ans=-1;
    }

    return 0;
}