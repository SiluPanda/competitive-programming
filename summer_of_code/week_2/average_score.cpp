/*https://codeforces.com/contest/81/problem/C*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll a,b;
	cin>>a>>b;
	ll arr[n];
	ll ans[n];
	map <ll, deque <ll>> indexes;
	for(ll i = 0; i < n; i++){
		cin>>arr[i];
		indexes[arr[i]].push_back(i);

		
	}
	for(ll i = 0; i < n; i++){
		ans[i] = 0;
	}
	if(a == b){
		ll i = 0;
		while(i < n){
			if(i < n/2){
				ans[i] = 1;
			}
			else{
				ans[i] = 2;
			}
			i++;
		}
	}
	else{
		sort(arr, arr+n, greater<ll>());
		if(a < b){
			ll itr = 0;
			while(itr < a){
				ans[indexes[arr[itr]].front()] = 1;
				indexes[arr[itr]].pop_front();
				itr++;
			}
			for(ll i = 0; i < n; i++){
				if(ans[i] == 0){
					ans[i] = 2;
				}
			}
		}
		else{
			ll itr = 0;
			while(itr < b){
				ans[indexes[arr[itr]].back()] = 2;
				indexes[arr[itr]].pop_back();
				itr++;
			}
			for(ll i = 0; i < n; i++){
				if(ans[i] == 0){
					ans[i] = 1;
				}
			}

		}
	}

	
	for(ll i = 0; i < n; i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;

}