#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> nums(n-1);
  for(int i=0;i<n;i++){
    cin >> nums[i];
  }
  int sum = accumulate(nums.begin(),nums.end(),0);
  int totalSum = (n * (n + 1)) / 2;
  cout << totalSum - sum;
}