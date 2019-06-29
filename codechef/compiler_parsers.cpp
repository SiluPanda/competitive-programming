#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(string s){
	vector <ll> v;
	ll p = 0;
	for(ll i = 0; i < s.length(); i++){
		if(s[i] == '<'){
			p++;
		}
		else{
			p--;
		}
		v.push_back(p);
	}
	
	ll fi = v.size()-1;
	for(ll i = 0; i < v.size(); i++){
		if(v[i] < 0){
			fi = i;
			break;
		}
	}
	
	for(ll i = fi; i >= 0; i--){
		if(v[i] == 0){
			return i+1;
		}
	}
	return 0;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<fun(s)<<endl;
	}
}