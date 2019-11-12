#include <bits/stdc++.h>
using namespace std;

bool is_palin(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[s.length()-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int ans = INT_MIN;
        string out = "";
        for(int pos = 0; pos < s.length(); pos++){
            for(int size = s.length()-pos; size > max(0, ans); size--){
                if(is_palin(s.substr(pos, size))){
                    ans = size;
                    out= s.substr(pos, size);
                }
            
            }
        }
        cout << out << endl;

    }
}