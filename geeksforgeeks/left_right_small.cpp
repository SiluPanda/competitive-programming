#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool fun(vector <ll> a, ll ind){
	ll n = a.size();
	ll i = 0, j = n-1;
	bool f = true;
	while(true){
		if(a[i] > a[ind] || a[j] < a[ind]){
			f = false;
			break;
		}
		if(i < ind){
			i++;
		}
		if(j > ind){
			j--;
		}
		if(i == ind && j == ind){
			break;
		} 
	}
	return f;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> a;
		for(ll i = 0; i < n; i++){
			ll num;
			cin>>num;
			a.push_back(num);

		}
		bool found = false;
		for(ll i = 1; i < n-1; i++){
			if(fun(a, i) == true){
				cout<<a[i]<<endl;
				found = true;
				break;
			}
		}

		if(!found){
			cout<<-1<<endl;
		}
		
	}
}