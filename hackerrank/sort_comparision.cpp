#include <bits/stdc++.h>
using namespace std;
#define ll long long int


vector <ll> sort_fast(vector <ll> v){
	cout<<"running sort 1"<<endl;
	map <ll, ll> freq;
	ll size = v.size();
	for(ll i = 0; i < size; i++){
		freq[v[i]] = 0;
	}
	for(ll i = 0; i < size; i++){
		freq[v[i]]++;
	}

	map <ll, ll>::iterator itr;
	vector <ll> distinct;
	for(itr = freq.begin(); itr != freq.end(); itr++){
		distinct.push_back(itr->first);
	}
	sort(distinct.begin(), distinct.end());
	vector <ll> ans;
	ll size_dist = distinct.size();
	for(ll i = 0; i < size_dist; i++){
		ll f = freq[distinct[i]];
		while(f--){
			ans.push_back(distinct[i]);
		}
	}

	return ans;
}


//test
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n; cin>>n;
	vector <ll> v, vdup;
	for(ll i = 0; i < n; i++){
		ll num; cin>>num;
		v.push_back(num);
		vdup.push_back(num);
	}

	time_t start = clock();
	vector <ll> ans = sort_fast(v);
	
	
	cout<< clock() - start <<endl;

	time_t start1 = clock();

	cout<<"running sort 2"<<endl;
	sort(vdup.begin(), vdup.end());
	
	
	cout<<clock() - start1<<endl;



}