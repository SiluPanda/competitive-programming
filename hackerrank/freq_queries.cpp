#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void freq(ll v[][2], ll size){
	

	map <ll, ll> m;
	for(ll i = 0; i < size; i++){
		if(v[i][0] == 1){
			if(m.find(v[i][1]) == m.end()) {
				m[v[i][1]] = 1;
			}
			else{
				m[v[i][1]] += 1;
			}
		}

		else if(v[i][0] == 2){
			if(m.find(v[i][1]) != m.end()){
				m[v[i][1]] -= 1;
			}
		}

		else{
			bool f = false;
			map <ll,ll>::iterator itr;
			for(itr = m.begin(); itr != m.end(); itr++){
				if(itr->second == v[i][1]){
					cout<<1<<endl;
					f = true;
					break;
				}
			}
			if(!f) cout<<0<<endl;
		}

		
	}
}

int main(){
	ll q; cin>>q;
	ll a[q][2];
	for(ll i = 0; i < q; i++){
		cin>>a[i][0]>>a[i][1];
	}

	freq(a, q);


}

