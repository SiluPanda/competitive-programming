#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(string s){
	ll p = 0, q = 0;
	
	
	for(ll i = 0; i < s.length(); i++){
		if(s[i] - '0' != 4 && s[i] - '0' != 7 ){
			p++;
		}
	}
	return p;
}

int main(){
	int t; cin>>t;
	while(t--){
		string n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
}