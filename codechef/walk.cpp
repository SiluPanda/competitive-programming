#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll m = 0;
		for(ll i = 0; i < n; i++){
			ll num;
			cin>>num;
			m = max(num+i, m);
		}
		cout<<m<<endl;
	}
}