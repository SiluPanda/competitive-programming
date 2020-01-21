#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool acc(string s){
    int n = s.length();
    if(n == 1) return 1;
    for(int i = 1; i < n; i++){
        if(islower(s[i]) != 0) return false;
    }
    return true;

}
int main(){
    string s;
    cin >> s;
    string ret = "";
    if(acc(s)){
        for(int i = 0; i < s.length(); i++){
            if(islower(s[i]) != 0){
                ret += toupper(s[i]);
            }
            else ret += tolower(s[i]);
        }
        cout << ret << el;
    }
    else{
        cout << s << el;
    }
    
}