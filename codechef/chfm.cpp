#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tt; cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        double a[n];
        double sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        double mean = sum/n;
        bool ok = 0;
        for(ll i = 0; i < n; i++){
            if(mean == a[i]){
                cout << i+1 << endl;
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "Impossible" << endl;

    }
}