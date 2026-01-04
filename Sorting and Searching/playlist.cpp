#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
      cin >> nums[i];
    }
    long long i = 0;
    long long j = 0;
    unordered_map<long long,long long> mpp;
    long long maxLen = 0;
    while(j < n){
      mpp[nums[j]]++;
      while(mpp[nums[j]] > 1){
        mpp[nums[i]]--;
        i++;
      }
      maxLen = max(maxLen,j-i+1);
      j++;
    }
    cout << maxLen << endl;
    return 0;
}