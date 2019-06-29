#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector <ll> dupli(vector <ll> a){
	ll i = 0;
	vector <ll> ans;
	sort(a.begin(), a.end());
	while(i < a.size()-1){
		if(a[i] != a[i+1]){
			ans.push_back(a[i]);
			i++;
		}
		else{
			ans.push_back(a[i]);
			while(a[i] == a[i+1]){
				i++;
			}
			i++;
			if(i == a.size()-1){
				break;
			}
		}
	}

	if(a[a.size()-1] != a[a.size()-2]){
		ans.push_back(a[a.size()-1]);
	}

	return ans;
}

int main(){
	int t;cin>>t;
	while(t--){
		ll n; cin>>n;
		vector <ll> p;
		for(ll i = 0; i < n; i++){
			ll num;
			cin>>num;
			p.push_back(num);
		}

		vector <ll> pnew;
		pnew = dupli(p);
		if((pnew[pnew.size()-1] - pnew[0]) == pnew.size()-1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}