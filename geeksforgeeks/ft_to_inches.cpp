#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fttoinches(ll ft, ll in){
	return 12*ft + in;
}

int main(){
	ll t; cin>>t;

	while(t--){
		ll n;
		cin>>n;
		
		ll m = 0;
		for(ll i = 0; i < n/2; i++){
			ll ft, in;
			cin>>ft>>in;
			ll c = fttoinches(ft, in)
			if(m < c){
				m = c;

			}
		}
		cout<<c<<endl;


	}
}