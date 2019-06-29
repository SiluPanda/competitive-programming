#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxi 1000

vector <ll> func(){
	vector <ll> v;
	v.push_back(0);
	v.push_back(1);
	while(v[v.size()-1] <= 1000){
		v.push_back(v[v.size()-1] + v[v.size()-2])
	}
	return v;
}

bool findinvec(ll e, vector <ll> v){
	for(ll i = 0; i<v.size(); i++){
		if(e == v[i]){
			return true;
		}
	}
	return false;
}

int main(){
	ll t; cin>>t;
	vector <int> v;
	v = func();
	while(t--){
		ll n; cin>>n;
		
		
		for(ll i = 0; i< n; i++){
			ll e;
			cin>>e;
			if(findinvec(e, v)){
				cout<<e<<" ";
			}

		}
		cout<<endl;
		


	}
}