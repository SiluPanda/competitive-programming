#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll get_max(ll a[], ll n, ll mult){
	ll ini = 1;
	ll mini = INT_MAX;
	ll ans = 0;
	for(ll i = 0; i < n;i++){
		ini = ini * a[i];
		if(mini > abs((mult/ini) - ini)){
			mini = abs((mult/ini) - ini);
			//cout << mini << endl;
			ans = i;
		}
	}

	return ans+1;
}

int main(){
	ll n, m;
	cin>>n>>m;
	ll a[n];
	ll mult = 1;
	for(ll i = 0; i < n; i++){
		cin>>a[i];
		mult = mult * a[i];
	}
	while(m--){
		ll type;
		cin>>type;
		if(type == 1){
			ll pos, val;
			cin>>pos>>val;
			a[pos-1] *= val;
			mult *= val;

		}
		else{
			cout << get_max(a, n, mult) << endl;
		}
	}

}