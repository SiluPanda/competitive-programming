#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll find_max(vector <ll> prices, ll low, ll high){
    ll max_ele = INT_MIN, ind = 0;; 
    for(ll i = low; i <= high; i++) {
        if(max_ele <= prices[i]) {
            max_ele = prices[i];
            ind = i;
        }
    }

    return ind;

    
}

ll stockmax(vector <ll> prices) {
    
    
    ll ans = 0, num_stocks = 0, buy_price = 0;
    ll size_p = prices.size();


    ll ind_max_e = find_max(prices, 0, size_p-1);
    
    ll itr = 0;
    while(itr < size_p){
        if(itr != ind_max_e){
            num_stocks++;
            buy_price += prices[itr];
        }
        else{
            
            ind_max_e = find_max(prices, itr+1, size_p-1);
            ans += prices[itr]*num_stocks - buy_price;
            buy_price = 0; num_stocks = 0;

        }
        itr++;
    }

    return ans;

}

int main(){
    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;
        vector <ll> p;
        for(ll i = 0; i < n; i++) {
            ll num; cin>>num;
            p.push_back(num);
        }
        cout<<stockmax(p)<<endl;

    }
}
