#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

const int MAX = 100001;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        set <int> S;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            mini = min(mini, num);
            maxi = max(maxi, num);
            S.insert(num);
        }

        if(S.size() == maxi-mini+1) cout << "Yes";
        else cout << "No";
        cout << el;
    }
}