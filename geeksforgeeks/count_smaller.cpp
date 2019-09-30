#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"


int main(){
    fastio;
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n;i++){
            int ans = 0;
            for (int j = i+1; j <n; j++){
                if(a[i] > a[j]) ans++;
            }
            cout << ans << " ";
        }
        cout << el;
    }
}