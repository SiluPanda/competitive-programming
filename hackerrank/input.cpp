#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ll n,m;
	cin>>n>>m;
	vector <vector<ll>> v;
	for(ll i = 0; i < n; i++){
		vector <ll> row;
		for(ll j = 0; j < m; j++){
			ll num; cin>>num;
			row.push_back(num);
		}
		v.push_back(row);
	}
	for(ll i = 0; i < n; i++){
		cout<<v[i][1]<<endl;
	}
}