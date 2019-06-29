#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;

		ll a[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bool found = false;
		for(int i = 0; i<n-1; i++){
			if(a[i] != a[i+1]){
				cout<<a[i]<<endl;
				found = true;
				break;
			}
		}
		if(found == false && a[n-1] != a[n-2]){
			cout<<a[n-1]<<endl;
		}
	}
}