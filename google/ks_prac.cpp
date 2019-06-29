#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll get_cost(ll a[], ll n, ll k){
	sort(a,a+n);
	ll min_cost = INT_MAX;
	for(ll i = 0; i <= n - k; i++){
		ll max_iter = i+k-1;
		ll cost = 0;
		for(ll j = i; j <= max_iter; j++){
			cost += (a[max_iter] - a[j]);
		}
		min_cost = min(min_cost, cost);
		if(min_cost == 0) break;
	}

	return min_cost;
}

int main(){
	int t; cin>>t;
	int q = 1;
	while(q <= t){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
		cout<<"Case #"<<q<<": "<<get_cost(a, n, k)<<endl;
		q++;

	}
}