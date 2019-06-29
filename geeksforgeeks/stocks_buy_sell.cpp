#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void buysell(vector <ll> a){
	ll n = a.size();
	ll i = 0;
	bool f = false;
	while(i < n-1){
		if(a[i] < a[i+1]){
			ll low = i;
			while(i < n-1 && a[i] <= a[i+1]){
				i++;
			}
			
			ll high = i;
			i++;
			
			
			cout<<"("<<low<<" "<<high<<")"<<" ";
			f = true;
		}
		else{
			i++;
		}
	}
	if(f == true){
		cout<<endl;
	}
	if(f == false){
		cout<<"No Profit"<<endl;
	}
}

int main(){
	int t; 
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		vector <ll> p;
		for(int i = 0; i < n; i++){
			ll num;
			cin>>num;
			p.push_back(num);
		}
		buysell(p);
	}
}