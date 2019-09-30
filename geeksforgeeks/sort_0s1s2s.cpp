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
        ll n; cin>>n;
       
        ll a[3] = {0};
        for(int i = 0; i < n;i++){
            int num;
            cin>>num;
            a[num]++;
            
        }
        for(ll i = 0; i < 3; i++){
            for(ll j = 0; j < a[i]; j++){
                cout << i << " ";
            }
            
        }
        cout << el;
    }
}