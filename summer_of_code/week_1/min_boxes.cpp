//https://codeforces.com/contest/903/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll min_boxes(ll a[], ll n){
	ll ans = 1;
	map <ll, ll> freq;
	for(int i = 0; i < n; i++){
		if(freq.find(a[i]) == freq.end()){
			freq[a[i]] = 1;
		}
		else{
			freq[a[i]]++;
		}
	}

	map <ll, ll>::iterator itr;
	for(itr = freq.begin(); itr != freq.end(); itr++){
		ans = max(ans, itr->second);
	}
	return ans;

	

}


int main(){
	ll n; cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin>>a[i];
	}
	cout<<min_boxes(a, n)<<endl;
}