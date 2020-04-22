#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        string s;
        cin >> s;
        int len = s.length();
        int i = 0;
        string ret = "";
        while(i < len){
            char curr = s[i];
            int j = i;
            while(curr == s[j]){
                j++;
            }
            int num = curr-'0';
            for(int pp = 0; pp < num; pp++){
                ret += '(';
            }
            for(int pp = 0; pp < j-i; pp++){
                ret += curr;
            }
            for(int pp = 0; pp < num; pp++){
                ret += ')';
            }
            i = j;
        }
        cout << "Case #" << t << ": " << ret << endl;
    }
    
}