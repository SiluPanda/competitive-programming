#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

bool ok(string s){
    int n = s.length();
    if(n < 7) return false;
    char last = '$';
    int count = 1;
    int i = 0;
    while(i < n){
        if(s[i] != last){
            last = s[i];
            count = 1;
        }
        else{
            count++;
        }
        if(count >= 7) return true;
        i++;
    }
    return false;

}

int main(){
    fastio
    string s;
    cin >> s;
    if(ok(s)) cout << "YES";
    else cout << "NO";
    cout << el;
    
}