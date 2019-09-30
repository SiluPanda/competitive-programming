#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int ans = INT_MIN;
        int maxi_so_far = 0;
        //follows kadane's algorithm
        for(int i = 0; i < n; i++){
            maxi_so_far += a[i];
            if(maxi_so_far > ans){
                ans = maxi_so_far;
            }
            if(maxi_so_far < 0){
                maxi_so_far = 0;
            }
        }

        cout << ans << el;
    }
}