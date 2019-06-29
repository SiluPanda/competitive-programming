#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll a[], ll n){
	ll m = 0;
	ll p = 0;
	for(ll i = 0; i < n; i++){
		
		if(a[i] != 0){
			p++;
		}
		else{
			p = 0;
		}
		m = max(m, p);
		
	}
	return m;
}

int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin>>a[i];
	}
	cout<<fun(a, n)<<endl;
}