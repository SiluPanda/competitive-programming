#include <bits/stdc++.h>
using namespace std;

string remove(string s){
    string ans = "";
    int i = 0;
    while(i < s.length()){
        if(i < s.length()-1 && s[i] == s[i+1]){
            while(i < s.length()-1 && s[i] == s[i+1]){
                i++;
            }
            i++;
        }
        else{
            ans += s[i];
            i++;
        }

    }
    return ans;
}

bool ok(string s){
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            return false;
        }
    }
    return true;
}
string fun(string s){
    if(s == "") return s;
    if(ok(s)) return s;
    else{
        string ans = remove(s);
        return fun(ans);
    }
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        cout << fun(s) << endl;
    }
}