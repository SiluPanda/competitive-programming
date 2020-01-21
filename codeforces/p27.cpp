#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

int main(){
    ll n;
    cin >> n;
    int c = 0;
    while(n > 0){
        int digit = n%10;
        n/=10;
        c += (digit == 4 || digit == 7);
    }
    if(c == 4 || c == 7) cout << "YES";
    else cout << "NO";
    cout << el;
}