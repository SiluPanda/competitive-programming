#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tt;
    cin >> tt;
    while(tt--){
        LL n;
        cin >> n;
        LL F[10];
        memset(F, 0, sizeof(F));
        while(n--){
            string s;
            cin >> s;
            for(int i = 0; i < 10; i++){
                F[i] += (s[i]-'0');
            }
        }
        LL ans = 0;
        for(int i = 0; i < 10; i++) ans += (F[i]%2 != 0);
        cout << ans << "\n";
    }
}