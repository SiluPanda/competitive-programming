#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int maxp = 0;
        while(n--){
            int s, p, v;
            cin >> s >> p >> v;
            maxp = max(p/(s+1) * v, maxp);

        }
        cout << maxp << endl;

    }
}