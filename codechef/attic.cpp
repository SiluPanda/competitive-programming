#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(string s){
	ll curr_day = 0;
	ll m = 0;
	ll itr = 0;
	while(itr < s.length()){
		if(s[itr] == '.'){
			ll temp = 0;
			while(s[itr] == '.'){
				temp++;
				itr++;
			}
			if(temp > m){
				curr_day++;
				m = temp;
			}
		}
		itr++;
	}
	return curr_day;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<fun(s)<<endl;
	}
}