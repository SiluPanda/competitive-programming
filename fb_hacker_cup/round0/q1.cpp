#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

bool isok(string s){
	ll len = s.length();
	bool space = 0, beta_num = 0;
	ll count = 0;
	for(int i = 1; i < len; i++){
		if(s[i] == '.'){
			space = 1;
		}
		if(s[i] == 'B'){
			count++;
		}
	}
	if(count >= (len/2)){
		beta_num = 1;
	}

	return (beta_num && space);
}

int main(){
	ll t; cin>>t;
	for(ll q = 0; q < t; q++){
		string s;
		cin>>s;
		if(isok(s)){
			cout<<"Case #"<<q+1<<": Y"<<endl;
		}
		else{
			cout<<"Case #"<<q+1<<": N"<<endl;
		}
	}
}