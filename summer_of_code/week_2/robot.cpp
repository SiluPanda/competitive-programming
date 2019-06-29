#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll bs(string s){
	bool found = false;
	for(ll i = 0; i < s.length(); i++){
		if(s[i] == 'h'){
			found = true;
			return i;
		}
	}
	if(!found){
		return INT_MAX;
	}
}


bool ranking(string s1, string s2){
	return bs(s1) >= bs(s2);
}

ll count_h(string s){
	ll x = 0;
	ll len = s.length();
	for(ll i = 0; i < len; i++){
		if(s[i] == 's'){
			for(ll j = i+1; j < len; j++){
				if(s[j] == 'h'){
					x++;
				}
			}
		}
	}
	return x;
}

int main(){
	ll n;
	cin>>n;

	string s;
	s = "";
	vector <string> v;
	while(n--){
		string inp;
		cin>>inp;
		v.push_back(inp);
	}
	sort(v.begin(), v.end(), ranking); 
	ll size = v.size();
	for(ll i = 0; i < size; i++){
		s += v[i];
	}
	
	
	cout<<count_h(s)<<endl;
}