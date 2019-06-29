/* problem: https://codeforces.com/contest/920/problem/B */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll time = 1;
		for(ll i = 0; i < n; i++){
			ll arrival, departure;
			cin>>arrival>>departure;

			if(time >= arrival && time <= departure){
				cout<<time<<" ";
				time++;
			}
			else if(time < arrival){
				cout<<arrival<<" ";
				time = arrival+1;
			}
			else{
				cout<<0<<" ";
			}

			
		}
		cout<<endl;
	}
}