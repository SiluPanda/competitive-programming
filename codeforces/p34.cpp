#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i]) != 0) c++;
    }
    string ret = "";
    if(c > s.length()-c){
        for(int i = 0; i < s.length(); i++){
            ret += toupper(s[i]);
        }
    }
    else{
        for(int i = 0; i < s.length(); i++){
            ret += tolower(s[i]);
        }
    }
    cout << ret << el;
}