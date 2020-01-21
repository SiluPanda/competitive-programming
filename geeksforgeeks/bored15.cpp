#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        map <int, int> F;
        char ans = '#';
        int ind = s.length();
        for(int i = 0; i < s.length(); i++){
            if(F.count(s[i])){
                if(ind > F[s[i]]) ind = F[s[i]], ans = s[i];
            }
            else F[s[i]] = i;
        }
        if(ans == '#') cout << -1;
        else cout << ans;
        cout << el;
    }
}