#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll a[], ll n){
	ll g = a[0];
	for(ll i = 0; i < n; i++){
		g = __gcd(g, a[i]);
	}
	if(g == 1){
		return n;
	}
	else{
		return -1;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i = 0; i < n; i++){
			cin>>a[i];
		}
		cout<<fun(a, n)<<endl;
	}
}