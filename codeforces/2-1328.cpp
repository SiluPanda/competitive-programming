#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        int i = 0;
        while(i*(i+1) <= 2*k){
            i++;
        }
        i--;
        int j = 2*k-i*(i-1);
        cout << i << " " << j << endl;
        vector <char> ret(n, 'a');
        if(j == 0){
            ret[n-1-i] = 'b';
            ret[n-i] = 'b';
        }
        else{
            ret[n-2-i] = 'b';
            ret[n-1-j] = 'b';
        }
        for(auto x : ret){
            cout << x;
        }
        cout << "\n";
    }
}
