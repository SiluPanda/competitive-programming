#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        unordered_map <int, vector <int> > F;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            F[num].push_back(i);
        }
        int ans = INT_MIN;
        for(auto it = F.begin(); it != F.end(); it++){
            if(it->second.size() != 0) ans = max(ans, it->second.back()-it->second.front());
        }
        cout << ans << el;
    }
}