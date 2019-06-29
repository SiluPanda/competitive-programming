#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int t; cin>>t;
	while(t--){
		ll n, c, q;
		cin>>n>>c>>q;
		while(q--){
			ll start, end;
			cin>>start>>end;
			if(c >= start && c <= end){
				ll new_pos = start + (end - c);
				c = new_pos;
			}
		}
		cout<<c<<endl;
	}
}