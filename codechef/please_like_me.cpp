#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool fun(ll l,ll n, ll s, ll c){
	vector <ll> v;
	v.push_back(s);
	if(s >= l){
		return true;
	}
	for(ll i = 1; i < n; i++){
		
		v.push_back(v.back() *(c+1));
		if(v.back() >= l){
			return true;
		}
	}
	return false;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll l,n,s,c;
		cin>>l>>n>>s>>c;
		if(fun(l,n,s,c)){
			cout<<"ALIVE AND KICKING"<<endl;
		}
		else{
			cout<<"DEAD AND ROTTING"<<endl;
		}
	}
}