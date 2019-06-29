#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n, q;
	cin>>n>>q;
	map <ll, ll> r, c;
	for(ll i = 1; i < n+1; i++){
		r[i] = 0;
		c[i] = 0;
	}
	while(q--){
		string com;
		ll rnum, val;
		cin>>com>>rnum>>val;
		if(com == "RowAdd"){
			r[rnum] += val;
		}
		else{
			c[rnum] += val;
		}
	}
	ll m1 = 0, m2 = 0;
	map <ll, ll>::iterator itr;
	for(itr = r.begin(); itr != r.end(); itr++){
		m1 = max(m1, itr->second);
	}
	for(itr = c.begin(); itr!= c.end(); itr++ ){
		m2 = max(m2, itr->second);
	}
	cout << m1+m2 << endl;

}