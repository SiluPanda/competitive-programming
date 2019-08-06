#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, k;
    cin>>n>>k;
    ll m = 0;
    ll arr[n] = {0};
    while(k--){
        ll a, b, val;
        cin>>a>>b>>val;
        for(ll i = a-1; i < b; i++){
            arr[i]+=val;
            m = max(arr[i], m);
        }
		
        
        
        
        
    }
    cout << m << endl;
}
