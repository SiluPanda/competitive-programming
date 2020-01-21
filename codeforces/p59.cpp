#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    ll n, m;
    cin >> n >> m;
    ll ret = 0;
    vector <ll> arr(m);
    for(ll i = 0; i < m; i++){
        cin >> arr[i];
    }
    ret += arr[0]-1;
    for(ll i = 1; i < m; i++){
        if(arr[i] >= arr[i-1]) {
            ret += arr[i]-arr[i-1];
        }
        else{
            ret += (n-arr[i-1]+arr[i]);
        }
    }
    cout << ret << endl;
}