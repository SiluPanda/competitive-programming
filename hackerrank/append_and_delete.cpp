/* Needs improvement in the algorithm 
Question: https://www.hackerrank.com/challenges/append-and-delete/problem */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool fun(string s, string t, ll k){
	if((k >= s.length() + t.length()) || s == t){
		return true;
	}
	ll i = 0;
	while(s[i] == t[i]){
		i++;
	}
	if(k == s.length() - i + t.length() -i){
		return true;
	}
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	if((s[0] == s[s.length()-1] && t[0] == t[t.length()-1]) && (k >= s.length() - i + t.length() -i)){
		return true;
	}


	return false;
}

int main(){
	string s, t;
	cin>>s>>t;
	ll k;
	cin>>k;
	if(fun(s, t, k)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}