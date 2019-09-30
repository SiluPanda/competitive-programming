#include <bits/stdc++.h>
using namespace std;

int lon(string s){
    int ans = 0;
    int cs = 0;
    int i = 0;
    map <char, int> mp;
    while(i < s.length()){
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]] = i;
            cs++;
            i++;
        }
        else{
            i = mp[s[i]]+1;
            
            mp.clear();
            ans = max(ans, cs);
            cs = 0;


        }
        if(i == s.length()){
            ans = max(ans, cs);
        }
    }
    return ans;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        cout << lon(s) << endl;
    }
}