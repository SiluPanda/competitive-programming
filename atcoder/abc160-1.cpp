#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    if(s[2] == s[3] && s[4] == s[5]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}