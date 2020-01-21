#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int n; cin >> n;
    string s;
    cin >> s;
    int a = 0;
    for(auto c : s){
        if(c == 'A') a++;
    }
    if(a > s.length()-a) cout << "Anton";
    else if(a < s.length()-a) cout << "Danik";
    else cout << "Friendship";
    cout << el;
}