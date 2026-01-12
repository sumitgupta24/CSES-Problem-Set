#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    vector<int> freq(26,0);
    for(char& ch: str) freq[ch-'A']++;
    int oddCount = 0;
    for(int i=0;i<26;i++){
      if(freq[i] % 2 == 1){
        oddCount++;
      }
      if(oddCount > 1){
        cout << "NO SOLUTION";
        return 0;
      }
    }
    string ans(n,' ');
    int a = 0, b = n-1;
    for(int i=0;i<26;i++){
      int count = freq[i];
      if(count % 2 == 1){
        ans[n/2] = i + 'A';
        count--;
      }
      while(count != 0){
        ans[a] = i + 'A';
        ans[b] = i + 'A';
        a++;
        b--;
        count -= 2;
      }
    }
    cout << ans << endl;
    return 0;
}