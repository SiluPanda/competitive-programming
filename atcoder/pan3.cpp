#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    long double a, b, c;
    cin >> a >> b >> c;
    if(sqrt(a) + sqrt(b) < sqrt(c)){
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
}

int main(){
    solve();
}