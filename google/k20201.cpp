#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tt;
    cin >> tt;
    for(int cas = 0; cas < tt; cas++){
        ll n, p;
        cin >> n >> p;
        vector <ll> pri(n);
        for(ll i = 0; i < n; i++) cin >> pri[i];
        sort(pri.begin(), pri.end());
        ll sum = 0;
        ll count = 0;
        for(ll i = 0; i < n; i++){
            if(sum + pri[i] <= p){
                sum += pri[i];
                count++;
            }
            else{
                break;
            }
        }
        cout << "Case #" << cas+1 << ": " << count << endl;
    }
}