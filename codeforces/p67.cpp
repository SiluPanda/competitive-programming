#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
typedef long long int ll;
typedef pair <ll, ll> pii;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        ll n, d;
        cin >> n >> d;
        bool ok = false;
        if(d <= n) cout << "YES" << endl;
        else{
            for(ll i = 1; i <= n; i++){
                if(i+ceil(d/(i+1)) <= n){
                    cout << i << endl;
                    ok = true;
                    break;
                }
            }
            if(ok) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
    }
}