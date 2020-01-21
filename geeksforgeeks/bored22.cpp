#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int ways(int x){
    return (x*(x-1))/2;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int pre[n+1];
        pre[0] = 0;
        for(int i = 1; i <= n; i++){
            int num;
            cin >> num;
            pre[i] = pre[i-1]+num;
        }
        unordered_map <int, int> F;
        for(int i = 0; i <= n; i++){
            F[pre[i]]++;
        }
        int ans = 0;
        for(auto i = F.begin(); i != F.end(); i++){
            ans += ways(i->second);
        }
        cout << ans << el;

    }
}