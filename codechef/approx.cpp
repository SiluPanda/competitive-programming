#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long int

string getit(ll k){
	if(k == 0){
		return "3";
	}
	string ans = "3.";
	ll pre = 46870;
	ll div= 33102;
	while(k--){
		ans += to_string(pre / div);
		pre = (pre % div) * 10;
	}

	return ans;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll k;
		cin>>k;
		cout << getit(k) << endl;
	}
}