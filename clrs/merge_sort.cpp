#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector <ll>  merge(vector <ll> left, vector <ll> right){
    stack <ll> l, r;
    for(ll i = left.size()-1; i >= 0; i--){
        l.push(left[i]);
    }
    for(ll i = right.size()-1; i >= 0; i--){
        r.push(right[i]);
    }
    vector <ll> ans;
    while(l.empty() && r.empty()){
        if(l.empty()){
            ans.push_back(r.top());
            r.pop();
        }
        else if(r.empty()){
            ans.push_back(l.top());
            l.pop();
        }
        else if(l.top() > r.top()){
            ans.push_back(r.top());
            r.pop();
        }
        else{
            ans.push_back(l.top());
            l.pop();
        }
    }

    return ans;
    
    

}

vector <ll> mergesort(vector <ll> v, ll low, ll high){
    if(low < high){
        ll mid = (low+high)/2;
        vector <ll> left = mergesort(v, low, mid);
        vector <ll> right = mergesort(v, mid+1, high);
        return merge(left, right);
    }
}

int main(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(ll i = 0; i < n;i++){
        cin >> v[i];
    }
    vector <ll> ans = mergesort(v, 0, n-1);
    for(ll i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}