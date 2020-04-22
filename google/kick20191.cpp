#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cases;
    cin >> cases;
    for(int c = 1; c <= cases; c++){
        ll n, p;
        cin >> n >> p;
        vector <ll> skills(n);
        for(int i = 0; i < n; i++){
            cin >> skills[i];
        }
        sort(skills.begin(), skills.end());
        vector <ll> presum(n+1);
        presum[0] = 0;
        for(int i = 1; i <= n; i++){
            presum[i] = presum[i-1] + skills[i-1];
        }
        ll mini = INT_MAX;
        for(ll i = p-1; i < n; i++){
            ll highest = skills[i];
            ll sum = presum[i]-presum[i-p+1];
            mini = min(mini, (p-1)*highest - sum);
        }
        cout << "Case #" << c << ": " << mini << endl;
    }
}