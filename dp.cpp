#include<iostream>
#include<vector>
using namespace std;

// fibonnaci question 
// first we will write the recursive method 

int solve(int n){

    //base case 
    if(n==0)
    return 0;

    if(n==1)
    return 1;
  // recursive call 
    int ans = solve(n-1) +solve(n-2);
    
    //return ans;

}


// Top to Down approach 

//recursion + memoization 
//step 1: create dp array  + pass in the function 
//step 2:store the ans in dp array
//step 3:check if dp has already answer 

// first create a dp array and pass into the main function 
int solveMem(int n, vector<int>& dp){

    //base case 
    if(n==0)
    return 0;

    if(n==1)
    return 1;
    
    //step 3
    // essential case for dp solution when dp approach
    if(dp[n]!=-1){
        return dp[n];
    }

     

    int ans = solveMem(n-1, dp) +solveMem(n-2, dp);
    //step 2
    // ans jisko return karte hai last main usko dp me store kar lete hai 
    dp[n] = ans;
    return ans;



}

// bottom-up approach
//step1:dp array creation
//step2:base case analysis of rec code and update dp array accordingly
//step3:find the range for change variable 

int solveTab(int  n)


//step1:dp array creation
// creating vector dp array we need to pass the (+1 ) in the function 
vector<int> dp(n+1, 0);


// step2:base case analysis and update dp array accordingly
// base case ko directly dp me store kar dete hai 
dp[0]=0;
dp[1]=1;

//step3:find the range for change variable and copy paste
// for loop laga ke base case find karte hai 
for (int i=2; i<=n; i++){
     int ans = dp[n-1] +dp[n-2];

    dp[n] = ans;
}
return dp[n];
   

}






//space optimization for the dynamic recursion

int solveTab(int nthTerm){
    // find the realtion between the prev1 and prev2 with respect to current 
    int prev1=1;
    int prev2=0;
    int curr;
    
    //find the range and copy paste 
    for (int i=0; i<=n; i++){
    int ans=prev1 +prev2;
    curr=ans;
    prev2=perv1;
    prev1=curr;
    }
    return prev1;

}

// main function slove it according to it 
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    //create a dp array 
    vector<int> dp(n+1, 0);
    int ans=solveMem(n,dp);

    cout << ans << endl;
    return 0;
}