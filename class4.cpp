#include<iostream>
#include<vector>

using namespace std;

// memoization + recursion
int minCoin(int target, vector<int>arr, int ans){
    //base case 
    if(target== 0){
        return 0;
    }
    if(target < 0){
        return INT_MIN;

    }

    if(dp[n]!=-1){
        return dp[n];
    }
    int mini=INT_MAX;

    for(int i=0;i<arr.size();i++){
      dp[n]= ans= minCoin(target-arr[i],arr, dp);
      return dp[n];

       if(ans!=INT_MAX){
        mini=min(mini, 1+ans, dp);
       }
    }
       return dp[n]=1+ans;
       return dp[n];
       

    }

    int main(){
        vector<int> &arr;

        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);

        int target=7;

        vector<int> &dp(n+1, -1);

        cout<<minCoin(target,arr, dp)<<endl;
    }


    // int n=17;
    // int a=10;
    // int b=11;
    // int c=3;
// step 1
    //vector<int> &dp(n+1, -1);
//     //int ans= minCoin(n,a,b,c,dp);
//     if(ans <= 0){
//         ans=-1;
//     }

//     return 0;
// }
    
    
    

