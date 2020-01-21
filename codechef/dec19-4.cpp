#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

ull getnum(string bin){
    ull ans = 0;
    for(ll i = bin.length()-1; i>=0; i--){
        ans += (bin[i]-'0')*(pow(2, bin.length()-1-i));
    }
    return ans;
}

int main(){
    fastio
    int tt;
    cin >> tt;
    while(tt--){
        string A, B;
        cin >> A >> B;
        ull a = getnum(A), b = getnum(B);
        ull ans = 0;
        while(b>0){
            ull u = a^b;
            ull v = a&b;
            a = u;
            b = v*2;
            ans++;
        }
        cout << ans << "\n";
    }
}