#include <bits/stdc++.h>
using namespace std;

string fun(string s, char x, int count){
    if(count == 0) return s;
    string ans = "";
    int len = s.length();
    int i;
    int curr = 0;
    for(i = 0; i < len; i++){
        if(s[i] == x){
            curr++;
        }
        if(count == curr){
            break;
        }
    }
    i++;
    for(;i < len; i++){
        ans += s[i];
    }
    return ans;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        char x;
        cin>>x;
        int count;
        cin>>count;
        cout << fun(s, x, count) << endl;
    }
}