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
        unordered_map <int, int> F;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            F[num]++;
        }
        int ans = 0;
        for(auto i = F.begin(); i != F.end(); i++) ans+=(i->second/2);
        cout << 2*ans << el;
    }
}