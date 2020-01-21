#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
typedef long long int ll;
typedef pair <ll, ll> pii;

int main(){
    ll n;
    cin >> n;
    for(ll i = sqrt(n); i >= 1; i--){
        if(n%i == 0 && __gcd(i, n/i) == 1){
            cout << i << " " << n/i << endl;
            break;
        }
    }
}
