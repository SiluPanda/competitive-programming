#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s.length()%2){
        cout << "No" << endl;
        return;
    }
    for(int i = 0; i < s.length(); i++){
        if(i%2 == 0 && s[i] != 'h' || i%2 == 1 && s[i] != 'i'){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}
int main(){
    solve();
}