#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isvowel(char c){
    return (c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e');
}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        int n = s.length();
        int pre[n+1];
        pre[0] = 0;
        for(int i = 1; i <= n; i++){
            if(isvowel(s[i-1])) pre[i] = pre[i-1]+1;
            else pre[i] = pre[i-1];
        }
        int q;
        cin>>q;
        while(q--){
            char act;
            cin>>act;
            if(act == 'F') cout << 
        }
    }
}