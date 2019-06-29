#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool compare_algo(pair <ll, ll> x, pair <ll, ll> y){
	if(x.first == y.first){
		return x.second > y.second;
	}
	else{
		return x.first < y.first;
	}
}

int main(){
	ll n;
	cin>>n;
	vector <pair <ll, ll>> v;
	for(ll i = 0; i < n; i++){
		ll x, y;
		cin>>x>>y;
		pair <ll, ll> p;
		p.first = x;
		p.second = y;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), compare_algo);
	ll ans = 0, chk = v[0].second;
	for(ll i = 1; i < n; i++){
		if(v[i].second <= chk){
			ans++;
		}
		else{
			chk = v[i].second;
		}
	}
	cout<<ans<<endl;



}