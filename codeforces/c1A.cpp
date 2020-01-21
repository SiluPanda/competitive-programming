#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, m;
    cin >> n >> m;
    vector <string> A(n), B(m);
    for(ll i = 1; i <= n; i++){
        string s;
        cin >> s;
        A[i%n] = s;
    }
    for(ll i = 1; i <= m; i++){
        string s;
        cin >> s;
        B[i%m] = s;
    }
    ll Q;
    cin >> Q;
    while(Q--){
        ll year;
        cin >> year;
        cout << (A[year%n] + B[year%m]) << endl;
    }
}