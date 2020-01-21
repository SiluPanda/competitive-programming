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
        bool F[100001];
        memset(F, 0, sizeof(F));
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            F[num] = 1;
        }
        int i = 0;
        int ans = 1;
        while(i <= 100000){
            if(F[i] != 0){
                int j = i;
                while(j <= 100000 && F[j] != 0){
                    j++;
                }
                ans = max(ans, j-i);
                i = j;
            }
            else i++;
        }
        cout << ans << el;
    }
}