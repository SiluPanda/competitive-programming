#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector <int> a(n);
        
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        bool f[n] = {0};
        int mx = a[0];
        for(int i = 1; i < n-1; i++){
            if(mx <= a[i]){
                mx = a[i];
                f[i] = 1;
            }
        }
        int mn = a[n-1];
        bool g[n] = {0};
        int found = false;
        for(int i = n-1; i >= 1; i--){
            if(mn >= a[i]){
                mn = a[i];
                g[i] = 1;
            }
        }
        for(int i = 0; i < n; i++){
            if(f[i] && g[i]){
                cout << a[i] << endl;
                found = true;
                break;
            }
        }

        if(!found) cout << -1 << endl;
        
    }
}