#include <bits/stdc++.h>
using namespace std;

bool isvalidpos(string s, int ind){
    bool ret = (s[ind] == '?' || s[ind] == 'C') && 
    (s[ind+1] == '?' || s[ind+1] == 'H') &&
    (s[ind+2] == '?' || s[ind+2] == 'E') &&
    (s[ind+3] == '?' || s[ind+3] == 'F');

    return ret;
    

}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        
        int i = 0;
        int n = s.length();
        vector <char> ret(n, '#');
        for(int i = n-4; i >= 0; i--){
            if(isvalidpos(s, i)){
                ret[i] = 'C';
                ret[i+1] = 'H';
                ret[i+2] = 'E';
                ret[i+3] = 'F';
                i -= 3;
            }
            
        }
        for(int i = n-1; i >= 0; i--){
            if(ret[i] == '#'){
                if(s[i] == '?') ret[i] = 'A';
                else ret[i] = s[i];
            }
        }
        string ans = "";
        for(auto x : ret) ans += x;
        cout << ans << endl;
    }
}