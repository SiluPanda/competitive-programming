#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b){
	if(b == 0){
		return a;
	}
	return gcd(b, a%b);
}

ll f(ll a[], ll n){
	sort(a, a+n);
	if(a[0] == a[n-1]){
		return a[0]+a[n-1];
	}
	ll g = a[n-2];
	for(ll i = n-3; i >= 0; i--){
		g = gcd(g, a[i]);
	}
	return max(gcd(g, a[n-2]) + a[n-1] , a[n-2] + gcd(g, a[n-1]));

}

int main(){
	ll t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i = 0; i<n; i++){
			cin>>a[i];
		}
		cout<<f(a,n)<<endl;
	}
}