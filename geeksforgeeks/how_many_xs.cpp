#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll countx(ll n, ll x){
	ll c = 0;
	while(n >= 1){
		ll d = n % 10;
		n /= 10;
		if(x == d){
			c++;
		}
	}
	return c;
}


int main(){
	ll t; cin>>t;
	while(t--){
		ll x;
		cin>>x;
		ll low, high;
		cin>>low>>high;
		ll c = 0;
		for(ll i = low +1; i < high; i++){
			ll numx = countx(i,x);
			c = c + numx;
		}
		cout<<c<<endl;
	}
}