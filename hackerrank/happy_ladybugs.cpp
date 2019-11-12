#include <bits/stdc++.h>
using namespace std;

bool ishappy(string s, int n){
    unordered_map <char, int> F;
    for(int i = 0; i < n; i++){
        F[s[i]]++;
    }
    if(F['_'] == 0){
        if(s[0] != s[1]) return 0;
        if(s[n-1] != s[n-2]) return 0;
        for(int i = 1; i < n-2; i++){
            if(s[i] != s[i+1] && s[i] != s[i-1]){
                return 0;
            }
        }
    }
    else{
        for(auto it = F.begin(); it != F.end(); it++){
            if(it->first != '_' && it->second == 1){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(ishappy(s, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}