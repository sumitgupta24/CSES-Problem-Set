#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int solve(int i,int sum,vector<int> dice,vector<vector<int>>& dp){
    if(i >= 6) return 0;
    if(sum == 0) return 1;
    if(dp[i][sum] != -1) return dp[i][sum];
    int take = 0, nottake = 0;
    if(dice[i] <= sum) take = solve(0,sum-dice[i],dice,dp);
    nottake = solve(i+1,sum,dice,dp);
    return dp[i][sum] = (take + nottake) % mod;
}

int totalWays(int sum,vector<int> dice){
    vector<vector<int>> dp(7,vector<int>(sum+1,-1));
    return solve(0,sum,dice,dp) % mod;
}

int main(){
    int n;
    cin >> n;
    vector<int> dice = {1,2,3,4,5,6};
    cout << totalWays(n,dice) << endl;
    return 0;
}