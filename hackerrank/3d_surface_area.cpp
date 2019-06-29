#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll sa(vector<vector<ll>> v){
	/*if(v.size() == 1){
		ll sum = 0;
		for(ll i = 0; i < v[0].size(); i++){
			sum += v[0][i];
		}
		ll ans = v[0][0] + v[0][v.front().size()-1] + 2 * v[0].size() + 2* sum;
		return ans;
	}*/
	
	ll a = 2 * (v.size() * v[0].size());
	//hori for
	ll n = v.size(); ll m = v[0].size();
	for(ll i = 0; i < n; i++){
		a += v[i][0];
		for(ll j = 1; j < m ; j++){

			if((v[i][j]-v[i][j-1]) > 0){
				a += (v[i][j]-v[i][j-1]);
			}
		}
	}

	//hori back
	for(ll i = 0; i < n; i++){
		a += v[i][m-1];
		for(ll j = m-2; j >= 0; j--){
			
			if((v[i][j] - v[i][j+1]) > 0){
				a += (v[i][j] - v[i][j+1]);
			}
		
		}
	}


	//vert down
	for(ll j = 0; j < m; j++){
		a += v[0][j];
		for(ll i = 1; i < n; i++){

			if((v[i][j] - v[i-1][j]) > 0){
				a += (v[i][j] - v[i-1][j]);
			}
		}
	}
	

	//vert up
	for(ll j = 0; j < m; j++){
		a += v[n-1][j];
		for(ll i = n-2; i >= 0; i--){

			if((v[i][j] - v[i+1][j]) > 0){
				a += (v[i][j] - v[i+1][j]);
			}
		}
	}

	return a;
}


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

	cout<<sa(v)<<endl;
}