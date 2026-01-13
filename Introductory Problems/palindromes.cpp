#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    if(n == 3 || n == 2) cout << "NO SOLUTION" << endl;
    else{
      for(int i=2;i<=n;i+=2){
        cout << i << " ";
      }
      for(int i=1;i<=n;i+=2){
        cout << i << " ";
      }
    }
    return 0;
}