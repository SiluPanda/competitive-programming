#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll candies(vector <ll> arr, ll n){
    ll curr = 1;
    ll ans = 0;
    vector <ll> num(n, 0);
    num[0] = 1;
    for(ll i = 1; i < n; i++){
        if(arr[i]>arr[i-1] && num[i] <= num[i-1]){
            num[i] = num[i-1]+1;
        }
        else{
            num[i] = 1;
        }
    }
    
    for(ll i = n-2; i >=0; i--){
        if(arr[i] > arr[i+1] && num[i] <= num[i+1]){
            num[i] = num[i+1]+1;
        }
    }
    for(ll i = 0; i < n; i++) {
        //cout << num[i] << " "; 
        ans+=num[i];
    }
    
    return ans;
}

int main(){
    ll n;
    cin >> n;
    vector <ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    cout << candies(arr, n) << endl;
}