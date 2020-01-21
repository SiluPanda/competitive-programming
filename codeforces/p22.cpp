#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    string s;
    cin >> s;
    unordered_map <char, int> F;
    for(int i = 0; i < s.length(); i++){
        F[s[i]]++;
    } 
    if(F['H'] > 0 || F['9'] > 0 || F['Q'] > 0) cout << "YES";
    else cout << "NO";
    cout << el;
}