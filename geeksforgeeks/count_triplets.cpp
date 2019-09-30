#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"



int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int ans = 0;
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        sort(v.begin(), v.end(), greater <int>());
        
        for(int i = 0; i < n-2; i++){
            int sum = v[i];
            int head = i+1;
            int tail = n-1;
            while(head < tail){
                int csum = v[head]+v[tail];
                if(csum  == sum){
                    ans++;
                    head++;
                    tail--;
                }
                else if(csum < sum) tail--;
                else head++;
            }
        }
        if(!ans) cout << -1 << el;

        else cout << ans << el;


    }
}