#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	string s;
	getline(cin, s);
	ll len = s.length();
	ll maxlen = 0;
	ll curr_len = 0;
	for(ll i = 0; i < len; i++){
		curr_len++;
		if(s[i] == ' ' || s[i] == '-' ){
			maxlen = max(maxlen, curr_len);
			curr_len = 0;
		}
	}
	cout<<maxlen<<endl;
}