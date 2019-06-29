#include <bits/stdc++.h>
using namespace std;
#define ll long long int


vector <ll> merge_arr(ll a[], ll n, ll b[], ll m){
	vector <ll> v;
	int i = 0, j = 0;
	while(1){
		if(i < n && ((a[i] < a[j]) || (j == m -1))){
			v.push_back(a[i]);
			i++;

		}
		else if(j < m && ((a[i] >= a[j]) || (i == n-1))){
			v.push_back(a[j]);
			j++;
		}

		if(i == n-1 && j == m-1){
			break;
		}
	}

	return v;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n, m; cin>>n>>m;
		ll a[n];
		ll b[m];

		for(ll i = 0; i < n; i++) cin>>a[i];
		for(ll i = 0; i < m; i++) cin>>b[i];

		vector <ll> ans;
		ans = merge_arr(a,n,b,m);

		ll s = ans.size();
		for(ll i = 0; i < s; i++) cout<<ans[i]<<" ";
		cout<<endl;



	}
}