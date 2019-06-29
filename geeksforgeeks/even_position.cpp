#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll find_person(ll n){
	ll i = 0;
	while(true){
		ll num = pow(2, i);

		if(num > n) break;
		i++;
	}
	return pow(2, i-1);
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<find_person(n)<<endl;
	}
}