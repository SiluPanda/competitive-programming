#include <bits/stdc++.h>
using namespace std;

#define int long long

bool is_palin(string s){
    string t(s.rbegin(), s.rend());
    return t == s;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int N = s.length();
    string first = s.substr(0, (N-1)/2);
    string second = s.substr((N+1)/2);
    if(is_palin(s) && is_palin(first) && is_palin(second)){
        cout << "Yes";
    }
    else cout << "No";
    cout << "\n";
}