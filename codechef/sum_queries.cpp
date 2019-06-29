#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll num_times(ll n, ll x){
	ll low = n+2, high = 3*n;
	if(x < low || x > high){
		return 0;
	}
	else{
		ll mid = 2*n+1;
		if(x == mid){
			return n;
		}
		else if(x > mid){
			return high - x + 1;
		}
		else{
			return x - low + 1;
		}
	}
}

int main(){
	ll n,q;
	cin>>n>>q;
	while(q--){
		ll x;
		cin>>x;
		cout<<num_times(n, x)<<endl;
	}
}