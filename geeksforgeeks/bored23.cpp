#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int sum1 = 0, sum2 = 0;
        unordered_map <int, int> F;
        for(int i = 0; i < n; i++) cin >> a[i], sum1+=a[i];
        for(int i = 0; i < m; i++) cin >> b[i], sum2+=b[i], F[b[i]]=1;
        int diff = sum2-sum1;
        if(abs(diff)%2 == 0){
            bool f = 0;
            for(int i = 0; i < n; i++){
                if(F[a[i]+diff/2] == 1){
                    f = 1;
                    cout << 1 << el;
                    break;
                }
            }
            if(!f) cout << -1 << el;
        }
        else cout << -1 << el;

    }
}