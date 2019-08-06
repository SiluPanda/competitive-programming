#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll back_index(ll curr_index, ll n){
    if(curr_index == 0){
        return n-1;
    }
    else{
        return curr_index-1;
    }
}

ll front_index(ll curr_index, ll n){
    return (curr_index+1)%n;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum = 0, pen = 0;
        vector <ll> v(n);
        ll mini = INT_MAX;
        ll ind = 0;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            if(mini > v[i]){
                mini = v[i];
                ind = i;
            }
        }
        vector <ll>::iterator itr;
        itr = v.begin() + ind + 1;
        while(v.size() != 1){
            if(v[front_index(ind, v.size())] > v[back_index(ind, v.size())]){
                
            }
        }



    }
}
