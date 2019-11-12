#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int p = -1, q = -1;
        for(int i = n; i >= 0; i--){
            if(i%3 == 0 && (n-i)%5 == 0){
                p = i;
                break;
            }
        }
        if(p == -1){
            cout << -1 << endl;
        }
        else{
            q = n-p;
            string ans = "";
            for(int i = 0; i < p; i++) ans += '5';
            for(int i = 0; i < q; i++) ans += '3';
            cout << ans << endl;
        }
        
        
    }
}