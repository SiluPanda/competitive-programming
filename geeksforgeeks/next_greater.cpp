#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    
    int t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll mm = INT_MIN;
        map <ll, ll> mp;
        for(ll i = 0; i < n; i++){
            cin>>a[i];
            mm = max(mm, a[i]);
            mp[a[i]]++;
        }
        map <ll, ll>::iterator itr;
        for(ll i = 0; i < n; i++){
            itr = mp.find(a[i]);
            itr++;
            if(a[i] == mm){
                cout << -1 << " ";

            }
            
            else cout << itr->first << " ";
        }
        cout << endl;


    }
	
	return 0;
}