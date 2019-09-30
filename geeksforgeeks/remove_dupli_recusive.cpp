#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool no_dupli(string s){
    int len = s.length();
    if(len == 0 || len == 1) return true;
    bool ans = true;
    for(int i = 0; i < len-1; i++){
        if(s[i] == s[i+1]){
            ans = false;
            break;
        }
    }
    return ans;
}
string remove(string s){
    if(no_dupli(s)) return s;
    else{
        int len = s.length();
        string newstr = "";
        int itr = 0;
        while(itr < len-1){
            if(s[itr] != s[itr+1]){
                newstr += s[itr];
            }
            itr++;
            
        }
        if(s[len-1] != s[len-2]){
            newstr += s[len-1];
        }
        remove(newstr);
    }

}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        cout << remove(s) << el;
    }
}