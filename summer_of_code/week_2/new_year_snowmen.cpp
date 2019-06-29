#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ll n; cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin>>a[i];
	}
	map <ll, ll> freq;
	for(ll i = 0; i < n; i++){
		if(freq.find(a[i]) != freq.end()){
			freq[a[i]]++;
		}
		else{
			freq[a[i]] = 1;
		}
	}
	ll k = 0;
	vector <vector <ll>> v;
	if(freq.size() < 3){
		cout<<0<<endl;
	}
	else{
		map <ll, ll>::iterator itr;
		for(itr = freq.begin(); itr != freq.end(); itr++){
			map <ll, ll>::iterator itr1;
			if(itr->second > 0){
				vector <ll> row;
				map <ll, ll>::iterator ele1, ele2;
				ll p = 0;
				row.push_back(itr->second);
				for(itr1 = freq.begin(); itr1 != freq.end(); itr1++){
					if(itr1 != itr){
						
						if(itr1->second > 0){
							row.push_back(itr1->first);
							freq[itr1->first]--;
							p++;
							if(p == 1) ele1 = itr1;
							else if(p == 2) ele2 = itr1;
						}
						if(row.size() >= 3){
							break;
						}
					}
				}
				if(row.size() == 3){
					freq[itr->first]--;
					k++;
					v.push_back(row);
				}
				else{
					freq[ele1->first]++;
					freq[ele2->first]++;
				}
			}
		}
		cout<<k<<endl;
		for(ll i = 0; i < v.size(); i++){
			for(ll j = 0; j < 3; j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}