#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

ll string_to_ll(string s){
    reverse(s.begin(), s.end());
    ll ans = 0;
    ll curr = 1;
    for(int i = 0; i < s.length(); i++){
        ans += curr*(s[i]-'0');
        curr*=10;
    }
    return ans;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        ll ans = 0;
        int n = s.length();
        for(int pos = 0; pos < n; pos++){
            for(int size = 1; size <= (n-pos); size++){
                string temp = s.substr(pos, size);
                ans += string_to_ll(temp);
            }
        }
        cout << ans << endl;
    }
}