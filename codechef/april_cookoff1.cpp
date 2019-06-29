#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll find_sec_max(ll a[], ll n){

	if(n == 1){
		return 0;
	}
	ll m1 = INT_MIN;
	for(ll i = 0; i < n; i++){
		if(m1 < a[i]) m1 = a[i];
	}

	ll m2 = INT_MIN;
	for(ll i = 0; i < n; i++){
		if(a[i] != m1){
			if(m2 < a[i]) m2 = a[i];
		}
	} 

	if(m2 == INT_MIN){
		return 0;
	}

	return m2;
}


int main(){
	ll n; cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++) cin>>a[i];
	cout<<find_sec_max(a,n)<<endl;
}