#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll tt;
    cin >> tt;
    while(tt--){
        ll n;
        cin >> n;
        ll a;
        cin >> a;
        ll s = 2 * (pow(10, n)) + a;
        cout << s << endl;
        ll b;
        cin >> b;
        ll c = pow(10, n)- b;
        cout << c << endl;
        ll d;
        cin >> d;
        ll e = pow(10, n) - d;
        cout << e << endl;
        int res;
        cin >> res;
        if(res == -1){
            break;
        }

    }
}