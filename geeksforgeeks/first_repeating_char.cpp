#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        map <char, bool> mp;
        bool f = 0;
        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i]) != mp.end()){
                cout << s[i] << endl;
                f = 1;
                break;
            }
            mp[s[i]] = 1;
        }
        if(!f) cout << -1 << endl;
    }
}