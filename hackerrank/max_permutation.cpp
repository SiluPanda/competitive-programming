#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector <ll> max_perm(vector <ll> v, ll k, map <ll, ll> all_indexes ){
	ll itr = 0; ll size = v.size();

	//touching corner cases
	if(size == 1){
		return v;
	}
	if(size == 2){
		if(v[0] < v[1]) swap(v[0], v[1]);
		return v;
	}
	if(k >= size){
		vector <ll> special_case;
		for(ll i = size; i >= 1; i--) special_case.push_back(i);
		return special_case;
		
	}
	while(k > 0){
		if(v[itr] != (size-itr)){
			ll swap_ind = all_indexes[size - itr];
			swap(v[itr], v[swap_ind]);
			k--;
		}
		itr++;
	}

	return v;

}




int main(){
	ll n,k; cin>>n>>k;
	vector <ll> v;
	map <ll, ll> all_indexes;
	for(ll i = 0; i < n; i++){
		ll num; cin>>num;
		v.push_back(num);
		all_indexes.insert({num, i})
	}
	
	vector <ll> ans;
	ans = max_perm(v,k, all_indexes);

	for(ll i = 0; i < n; i++){
		cout<<ans[i]<<" ";
	}

	cout<<endl;

}