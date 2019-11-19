#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

int ispalin(string s){
    string tt = s;
    reverse(tt.begin(), tt.end());
    return s == tt;
}

int pali(string s){
    if(ispalin(s)) return -1;
    int n = s.length();
    for(int i = 0; i < n; i++){
        string temp = s.substr(0, i) + s.substr(i+1);
        if(ispalin(temp)) return i;
    }
    return -1;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        cout << pali(s) << "\n";
    }
}

