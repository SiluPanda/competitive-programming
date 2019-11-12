#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char last = s[0];
    int ans = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] != last){
            ans++;
            last = s[i];
        }
    }
    cout << ans << endl;
}