#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        for(int i = 0; i < n; i++) v[i] = i+1;
        for(int i = 0; i < n; i++){
            reverse(v.begin()+i, v.end());
        }
        unordered_map <int, int> index;
        for(int i = 0; i < n; i++) index[v[i]] = i+1;
        cout << index[k] << endl;
    }
}