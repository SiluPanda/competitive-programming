#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int max_in(int a[], int low, int high){
    int ans = INT_MIN;
    for(int i = low; i <= high; i++) ans = max(ans, a[i]);
    return ans;
}

int amount(int a[], int n){
    if(n <= 2){
        return 0;
    }
    
    int ans = 0;
    int r = a[0], l = max_in(a, 2, n-1);
    for(int i = 1; i < n-1; i++){
        ans += max(0, (min(r, l)-a[i]));
        if(r < a[i]) r = a[i];
        if(l == a[i+1]) l = max_in(a, i+2, n-1);
    }
    return ans;

}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        cout << amount(a, n) << el;
        
    }
}