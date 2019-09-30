#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

ll enc(string num){
    ll n = num.length();
    ll ans = 0;
    ll itr = n-1;
    while(itr > 0){
        if(num[itr] == num[itr-1]){
            itr--;
        }
        else{
            ans = (ll) (ans + (num[itr]-'0')*(pow(10, n-1-itr)));
            itr--;
        }
    }
    ans = (ll) (ans + (num[0] - '0')*(pow(10, n-1)));
    return ans % mod;
}
string incr(string num){
    ll n = num.length();
    ll itr = n;
    num = '0'+num;
    while(itr > 0){
        if(num[itr] == '9'){
            num[itr] = 0;
            num[itr-1] = ((num[itr-1]-'0')+1)+'0';
            itr--; 
        }
        else{
            num[itr] = ((num[itr]-'0')+1)+'0';
            break;
        }
    }
    return num;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll p1, num1, p2, num2;
        cin>>p1>>num1>>p2>>num2;
        ll ans = 0;
        for(ll i = num1; i <= num2; i++){
            ans = (ll) (ans+enc(to_string(i))) % mod;
        }
        cout << ans%mod << el;

    }
    // string n; cin>>n;
    // cout << enc(n) << el;

    
    
}