#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n-1; i++){
            if(i%2 == 0){
                if(a[i+1] < a[i]){
                    swap(a[i], a[i+1]);
                }
            }
            else{
                if(a[i] < a[i+1]){
                    swap(a[i], a[i+1]);
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}