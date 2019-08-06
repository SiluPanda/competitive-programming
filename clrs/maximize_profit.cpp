#include <bits/stdc++.h>
using namespace std;
#define ll long long int

//follows kadane's algorithm
ll max_subarr(vector <ll> v, ll n){
    ll ans = INT_MIN;
    ll max_so_far = 0;
    for(ll i = 0; i <n; i++){
        max_so_far += v[i];
        if(max_so_far > ans){
            ans = max_so_far;
        }
        if(max_so_far < 0){
            max_so_far = 0;
        }
    }
    return ans;
}

ll maximize(vector <ll> prices, ll n){
    vector <ll> diff(n);
    diff[0] = 0;
    for(ll i = 1; i < n; i++){
        diff[i] = prices[i] - prices[i-1];
    }
    ll ans = max_subarr(diff, n);
    if(ans < 0){
        return 0;
    }
    else{
        return ans;
    }
}

int main(){
    ll n;
    cin>>n;
    vector <ll> prices(n);
    for(ll i = 0; i < n; i++){
        cin >> prices[i];
    }
    cout << maximize(prices, n) << endl;
}