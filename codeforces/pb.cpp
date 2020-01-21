#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    int n;
    cin >> n;
    double ans = 0;
    while(n > 0){
        ans += (1/(double) n);
        n -= 1;
    }
    cout << ans << endl;
}