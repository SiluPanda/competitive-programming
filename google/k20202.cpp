#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(priority_queue <ll> Q, ll k){
    
    while(true){
        cout << Q.top() << " " << k << endl;
        if(k == 0){
            return Q.top();
            break;
        }
        if(Q.size() == 1){
            if(k > 0){
                return max(Q.top()/k, Q.top()%k);
            }
            else{
                return Q.top();
            }
            break;
        }
        
        if(Q.top() == 1){
            return 1;
        }
        
        ll curr = Q.top();
        Q.pop();
        ll nowk = (curr/Q.top())+1;
        if(Q.top() == 1){
            nowk = curr;
        }
        nowk = min(nowk, k+1);
        Q.push(max(curr%nowk, curr/nowk));
        k-=(nowk-1);
    }
    return Q.top();
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tt;
    cin >> tt;

    for(ll c = 1; c <= tt; c++){
        ll n, k;
        cin >> n >> k;
        vector <ll> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector <ll> diff(n-1);
        priority_queue <ll> Q;
        for(ll i = 0; i < n-1; i++){
            diff[i] = arr[i+1]-arr[i];
            cout << diff[i] << endl;
            Q.push(diff[i]);
        }
        ll ans  = solve(Q, k);
        cout << "Case #" << c << ": " << ans << endl;

    }

}