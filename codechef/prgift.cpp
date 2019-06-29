#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll a[], ll n){
	ll m = 0;
	for(ll i = 0; i < n; i++){
		if((a[i] %2) == 0){
			m++;
		}
	}
	return m;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll k; cin>>k;
		ll a[n];
		for(ll i = 0; i < n; i++){
			cin>>a[i];
		}
		if(k == 0){
			if(fun(a, n)== n){
				cout<<"NO"<<endl;

			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			if(fun(a, n) >= k){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}