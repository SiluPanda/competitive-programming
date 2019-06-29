#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll max_arr(ll arr[], ll low, ll high){
	ll m = arr[low];
	for(ll i = low; i <= high; i++){
		if(m < arr[i]){
			m = arr[i];
		}
	}

	return m;
}

void printmax(ll arr[], ll n, ll k){
	ll fp = 0, lp = k-1;
	ll curr_max = max_arr(arr, fp, lp);
	cout<<curr_max<<" ";
	fp++; lp++;
	while(lp < n){
		if(curr_max == arr[fp-1]){
			curr_max = max_arr(arr, fp, lp);
		}
		else if(arr[lp] > curr_max){
			curr_max = arr[lp];
		}
		cout<<curr_max<<" ";
		lp++; fp++;
	}
	cout<<endl;
}


int main(){
	int t; 
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll i = 0; i < n; i++){
			cin>>arr[i];
		}
		printmax(arr, n, k);
	}
}