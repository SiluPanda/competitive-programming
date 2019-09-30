#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll max_sum(ll a[], ll n){
	ll max_s = INT_MIN;
	ll sum_curr = 0;

	ll i = 0;

	if(n == 1){
		return a[0];
	}
	while (i < n){
		if (a[i] < a[i+1]){
			sum_curr = 0;
			while (a[i] < a[i+1] && i < n-1){
				sum_curr += a[i];
				i++;
			}
			sum_curr += a[i];
			if(sum_curr > max_s) max_s = sum_curr;
		}
		else i++;
		if (i >= n-1) break;
	}

	return max_s;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for (ll i = 0; i < n; i++) cin>>a[i];

		cout<<max_sum(a, n)<<endl;
	}
}