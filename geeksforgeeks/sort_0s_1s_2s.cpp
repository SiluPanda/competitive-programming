#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector <ll> smartsort(ll a[], ll n){
    
    vector <ll> zeros, ones, twos;
    for(ll i = 0; i < n; i++){
        if(a[i] == 0){
            zeros.push_back(0);
            
        }
        else if(a[i] == 1){
            ones.push_back(1);
        }
        
        else{
            twos.push_back(2);
        }
    }
    
    vector <ll> ans;
    for(ll i = 0; i < zeros.size(); i++){
        ans.push_back(zeros[i]);
    }
    
    for(ll i = 0; i < ones.size(); i++){
        ans.push_back(ones[i]);
    }
    
    for(ll i = 0; i < twos.size(); i++){
        ans.push_back(twos[i]);
    }
    
    return ans;
    
}

int main(){
    
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        
        vector <ll> v;
        v = smartsort(a, n);
        for(ll i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}