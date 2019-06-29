#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool is_there(string s, char p){
	ll len = s.length();
	for(ll i = 0; i < len; i++){
		if(p == s[i]){
			return true;
		}
	}

	return false;
}

vector <string> sub_strings(string s){

	vector <string> all;
	ll size = s.length();

	for(ll i = 0; i < size; i++){
		for(ll len = 1; len <= size-i; len++){
			all.push_back(s.substr(i, len));
		}
	}

	return all;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		string s;
		char c;
		cin>>s>>c;
		ll count = 0;
		vector <string> all;
		all = sub_strings(s);
		ll size = all.size();
		for(ll i = 0; i < size; i++){
			//cout<<all[i]<<" ";
			if(is_there(all[i], c)){
				count++;
			}
		}
		cout<<count<<endl;
	}

}