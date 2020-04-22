#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, r;
    cin >> n >> r;
    if(n < 10){
        r += 100*(10-n);
    }
    cout << r << endl;
}