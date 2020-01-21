#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int n;
    cin >> n;
    int ret = 0;
    while(n--){
        int x, y;
        cin >> x >> y;
        ret += (y-x >= 2);
    }
    cout << ret << el;
}