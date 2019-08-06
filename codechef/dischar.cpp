#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        ll len = s.length();
        int i = 0;
        map <char, bool> mp;
        int ans = 0;
        while(i < len){
            mp[s[i]] = true;
            i++;
        }
        ans =  max(ans, (int) mp.size());
        cout << ans << endl;
    }
    
}