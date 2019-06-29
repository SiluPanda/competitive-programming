#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<< n + (n*(n+1)/2) <<endl;
	}
}