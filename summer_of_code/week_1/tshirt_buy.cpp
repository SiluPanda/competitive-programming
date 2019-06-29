//https://codeforces.com/contest/799/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ll n; cin>>n;
	ll pr[n], f[n], b[n];
	for(ll i = 0; i < n; i++){
		cin>>pr[i];
	}
	for(ll i = 0; i < n; i++){
		cin>>f[i];
	}
	for(ll i = 0; i < n; i++){
		cin>>b[i];
	}
	ll m; cin>>m;
	ll fav[m];
	for(ll i = 0; i < m; i++){
		cin>>fav[i];
	}
	set <ll> types[3];
	for(ll i = 0; i < n; i++){
		if(f[i] == 1 || b[i] == 1){
			types[0].insert(pr[i]);
		}
		if(f[i] == 2 || b[i] == 2){
			types[1].insert(pr[i]);
		}
		if(f[i] == 3 || b[i] == 3){
			types[2].insert(pr[i]);
		}
	}
	
	for(ll i = 0; i < m; i++){
		if(fav[i] == 1){
			if(types[0].empty()){
				cout<<-1<<" ";
			}
			else{
				ll val = *types[0].begin();
				cout<<val<<" ";
				for(int j = 0; j < 3; j++){ 
					types[j].erase(val);
				}
			}
		}
		else if(fav[i] == 2){
			if(types[1].empty()){
				cout<<-1<<" ";
			}
			else{
				ll val = *types[1].begin();
				cout<<val<<" ";
				for(int j = 0; j < 3; j++){
					types[j].erase(val);
				}
			}

		}
		else{
			if(types[2].empty()){
				cout<<-1<<" ";
			}
			else{
				ll val = *types[2].begin();
				cout<<val<<" ";
				for(int j = 0; j < 3; j++){
					types[j].erase(val);
				}
			}
		}





	}



}