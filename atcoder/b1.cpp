#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i <= n-3; i++){
        if(s.substr(i, 3) == "ABC"){
            ans += 1;
        }
    }
    cout << ans << endl;
      
}