#include<iostream>
#include<vector>

using namespace std;


// step 1: create the dp array and pass in the function 
// step 2: return ans should be store in the dp
// 
// creating a dp array and pass into the main function 
int solve(vector<int>& arr,int index, vector<int>&dp){
    //base case
    if(index >= arr.size())
    return 0;

// step 3 is essentail for the dp solution to store the value 
// check the dp has atready answer is stored or not 
    if(dp[index]!=-1){
        return dp[index];
    }

    }
// pass the dp in the every function of the 
    int incl=arr[index] + solve(arr, index+2, dp);
    int excl=0+ solve(arr, index+1, dp);

    //dp[index]=max;
    // ans store in the dp 
    return dp[index]= max(excl,incl);

}




//bottom up approach
// step 1: create a dp array 
// step 2:base shuold be store in the dp
// step3: find the change in the varaible and copy from the memoization 
int solveTab(vector<int> arr, int index){

    //step 1
    vector<int>&dp(arr.size()+2,0);

    //step 2

     dp[0]=0;
     dp[1]=1;

     //step 3
     int n=arr.size();
     for (int index=n-1; index >=0; index--){
        int incl=arr[index] + dp[index+2];
    int excl= 0+ dp[index+1];

      dp[index]= max(excl,incl);
     }
     return dp[0];

}


int main()
{
 vector<int>arr;
 arr.push_back(2);
 arr.push_back(3);
 arr.push_back(4);
 arr.push_back(5);

 int ans=0;

 vector<int>dp(arr.size(), -1);

 cout<<"ans is :"<< solve(arr, 0, dp)<<endl;

 return 0;
}








