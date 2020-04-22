#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isprime(ll n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    for(ll i = 5; i <= sqrt(n); i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}

bool tprime(ll n){
    double sq = sqrt(n);
    if((ll) sq != sq){
        return false;
    }
    return isprime(sq);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll num;
        cin >> num;
        if(tprime(num)){
            cout << "YES";
        }
        else cout << "NO";
        cout << endl;
    }

}