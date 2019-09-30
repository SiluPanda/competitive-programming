#include <bits/stdc++.h>
using namespace std;

bool test(string s){
    int len = s.length();
    if(len%2 != 0){
        string ans = "";
        for(int i = 0; (i < len) && (i != len/2); i++){
            ans += s[i];
        }
        s = ans;
    }
    int left[26] = {0}, right[26] = {0};
    for(int i = 0; i < len/2; i++){
        left[s[i]-'a']++;
    }
    for(int i = len/2; i < len; i++){
        right[s[i]-'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(left[i] != right[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        if(test(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}