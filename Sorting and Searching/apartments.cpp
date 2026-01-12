#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> apartment(n);
    for(int i=0;i<n;i++) cin >> apartment[i];
    vector<int> size(m);
    for(int i=0;i<m;i++) cin >> size[i];
    sort(apartment.begin(),apartment.end());
    sort(size.begin(),size.end());
    int i = 0, j = 0;
    int count = 0;
    while(i < n && j < m){
        if(size[j] < apartment[i] - k) j++;
        else if(size[j] > apartment[i] + k) i++;
        else{
            i++;
            j++;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}