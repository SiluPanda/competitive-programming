#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"


bool isit(int a[], int pos, int val){
    if(pos <= 4){
        for(int i = pos-1; i >= 0; i--){
            if(a[i] <= val) return 0;
        }
        return 1;
    }
    for(int i = pos-1; i >= pos-5; i--){
        if(a[i] <= val) return 0;
    }
    return 1;

}

int main(){
    fastio
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(isit(a, i, a[i])) ans++;
        }
        cout << ans << endl;
    }
}