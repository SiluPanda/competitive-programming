#include <bits/stdc++.h>
using namespace std;
#define ll long long int


string fun(ll a[], ll n, string b){
	ll m = INT_MIN;
	for(ll i = 0; i < n-1; i++){
		m = max(m, a[i]);
		if(m > i+1 && b[i] == '0'){
			return "NO";
		}
	}
	return "YES";
}


int main(){
	ll n; cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin>>a[i];
	}
	string b;
	cin>>b;
	
	cout<<fun(a, n, b)<<endl;
}