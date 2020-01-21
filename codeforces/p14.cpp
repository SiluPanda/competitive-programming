#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    string s;
    cin >> s;
    unordered_map <int, int> F;
    for(int i = 0; i < s.length(); i++){
        F[s[i]] = 1;
    }
    if(F.size()%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    cout << el;
}