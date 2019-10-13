#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        unordered_map <string , int > f;
        for(int i = 0; i < n; i++){
            string s;
            cin>>s;
            f[s]++;
        }
        int ma = INT_MIN;
        string ans = "";
        for(auto it = f.begin(); it != f.end(); it++){
            if(it->second > ma){
                ma = it->second;
                ans = it->first;
            }
        }
        cout << ans << endl;
    }
    
}