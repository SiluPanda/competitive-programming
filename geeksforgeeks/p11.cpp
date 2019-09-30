#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int a[26] = {0};
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(a[s[i]-'a'] == 0){
                a[s[i]-'a'] = 1;
            }
            else{
                ans++;
            }
        }
        cout << ans << endl;
    }
}