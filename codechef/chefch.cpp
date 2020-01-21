#include <bits/stdc++.h>
using namespace std;

using ll = long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        string A = "", B = "";
        for(int i = 0; i < s.length(); i++){
            if(i&1){
                A += '+';
                B += '-';
            }
            else{
                A += '-';
                B += '+';
            }
        }
        int c1 = 0, c2 = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != A[i]) c1++;
            if(s[i] != B[i]) c2++;
        }
        cout << min(c1, c2) << endl;
    }
}