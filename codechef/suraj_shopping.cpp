#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll price(ll a[], ll n){
	if(n == 1){
		return a[0];
	}
	if(n == 2){
		return a[0]+a[1];
	}
	sort(a, a+n, greater <int>());
	if(n == 3){
		return a[0]+a[2]+a[1];
	}
	ll p = (n/4) * 4;
	ll q = n%4;
	ll ans = 0;
	for(ll i = 0; i < p; i++){
		if((i%4) == 0 || (i%4) == 1){
			ans += a[i];
		}
	}
	if(q == 3){
		ans += a[n-3] + a[n-2];
	}
	if(q == 2){
		ans += a[n-2] + a[n-1];
	}
	if(q == 1){
		ans += a[n-1];
	}

	return ans;

}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i = 0; i < n; i++){
			cin>>a[i];
		}
		cout<<price(a, n)<<endl;
	}
}