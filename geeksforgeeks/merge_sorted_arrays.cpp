#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		ll n, m;
		cin>>n>>m;
		ll a[n], b[m];
		for(ll i = 0; i < n; i++) cin>>a[i];
		for(ll i = 0; i < m; i++) cin>>b[i];
		ll heada = 0, headb = 0;
		while(heada < n || headb < m){
			if(headb > m-1 || a[heada] <= b[headb]){
				cout << a[heada] << " ";
				heada++;
			}
			else{
				cout << b[headb] << " ";
				headb++;
				
			}
		}
		cout << endl;
	}
}