#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]) ans++;
    }
    cout << ans << el;
}