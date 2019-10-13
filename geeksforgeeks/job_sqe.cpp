#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct job{
    ll profit;
    ll deadline;
};

bool comp(job A, job B){
    if(A.profit == B.profit){
        return A.deadline <= B.deadline;
    }
    return A.profit >= B.profit;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        job a[n];
        for(ll i = 0; i < n; i++){
            ll id;
            cin >> id >> a[i].deadline >> a[i].profit;
        }
        sort(a, a+n, comp);
        ll time = 1;
        ll nums = 0;
        ll ans = 0;
        bool slot[n] = {0};
        for(ll i = 0; i < n; i++){
            for(int j = min(n-1, a[i].deadline-1); j >= 0; j--){
                if(slot[j]==0){
                    nums++;
                    ans += a[i].profit;
                    slot[j] = 1;
                    break;
                }
            }
            
        }
        cout << nums << " " << ans << endl;
        
    }
}