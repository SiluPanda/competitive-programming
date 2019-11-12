#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define el "\n"

LL getmax(LL a[], LL low, LL high){
    if(low == high){
        return a[low];
    }
    return max(getmax(a,low,(low+high)/2),getmax(a,((low+high)/2)+1, high));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    LL ans = 0;
    LL n;
    cin >> n;
    LL a[n];
    for(LL i = 0; i < n; i++) cin >> a[i];
    for(LL low = 0; low <= n-2; low++){
        for(LL high = low+1; high <= n-1; high++){
            if(a[low]*a[high] <= getmax(a, low, high)) ans+=1;
        }
    }
    cout << ans << el;
}
