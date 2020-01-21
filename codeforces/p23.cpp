#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    string s;
    cin >> s;
    string c = "";
    for(int i = 0; i < s.length(); i++){
        if(i == 0) c += toupper(s[i]);
        else c += tolower(s[i]);
    }
    cout << c << el;
}