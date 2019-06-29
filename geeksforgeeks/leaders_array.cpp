#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        
        vector <ll> leaders;
        ll cl = a[n-1];
        leaders.push_back(cl);
        for(int i = n-2; i >=0; i--){
            if(a[i] >= cl){
                cl = a[i];
                leaders.push_back(cl);
            }
        }
        
        ll size = leaders.size();
        for(ll i = size-1; i >=0; i--){
            cout<<leaders[i]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}