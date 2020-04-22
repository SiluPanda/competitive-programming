#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        float d, u;
        cin >> d >> u;
        int k;
        cin >> k;
        float default_cost = u*d;
        int ans = 0;
        for(int i = 0; i < k; i++){
            float m, r, c;
            cin >> m >> r >> c;
            float curr_cost = c/m + r*u;
            if(default_cost > curr_cost){
                default_cost = curr_cost;
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
    
}