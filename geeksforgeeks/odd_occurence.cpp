#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            ans ^= num;
        }
        cout << ans << el;
    }
}