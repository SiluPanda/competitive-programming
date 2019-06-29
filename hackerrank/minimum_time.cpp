#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll min_days(ll a[], ll n, ll goal){
	ll days = 1;
	ll items = 0;
	ll i = 1;
	while(items < goal){
		for(ll i = 0; i < n; i++){
			if(days % a[i] == 0){
				items++;
			}
		}
		days++;
	}

	return days;
}

int main(){
	int n,goal;
	cin>>n>>goal;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin>>a[i];
	}
	cout<<min_days(a, n, goal)-1<<endl;;
}