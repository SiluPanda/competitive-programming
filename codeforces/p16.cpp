#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio;
    string s;
    cin >> s;
    string tar = "hello";
    int i = 0, j = 0;
    while(i < s.length()){
        if(j < 5 && s[i] == tar[j]){
            j++;
        }
        i++;
    }
    if(j == 5) cout << "YES";
    else cout << "NO";
    cout << el;
}