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
        int n, k;
        cin >> n >> k;
        unordered_map <int, int> F, IND;
        int ind = n+1;
        int ans = -1;
        bool found = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(!IND.count(num)) IND[num] = i;
            F[num]++;
            if(F[num] >= k){
                if(IND[num] < ind){
                    ans = num;
                }
            }
        }
        cout << ans << el;
    }
}
