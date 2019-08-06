#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int tt;
	cin>>tt;
	while(tt--){
		ll n, m;
		cin>>n>>m;
		ll a[m];
		for(ll i = 0; i < m; i++){
			cin>>a[i];
		}
		ll max_ele = INT_MIN;
		ll min_ele = INT_MAX;
		for(ll i = 0; i < m; i++){
			max_ele = max(max_ele, a[i]);
			min_ele = min(min_ele, a[i]);
		}
		
		for(ll i = 0; i < n; i++){
			ll ans = max(abs(i - max_ele), abs(i - min_ele));
			cout << ans << " ";
		}
		cout << endl;
	}
}