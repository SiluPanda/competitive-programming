#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int x, n, w;
    cin >> x >> n >> w;
    int ans = 0;
    for(int i = 1; i <= w; i++){
        ans += i*x;
    }
    cout << max(0, (int) ans-n) << el;
}