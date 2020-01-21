#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"


ll bin(vector <ll> arr, ll low, ll high, ll x){
    while(low <= high){
        ll mid = low + (high-low)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] > x){
            high = mid-1;
        }
        else low = mid+1;
    }
    return (ll) -1;
}

int main(){
    fastio
    int tt;
    cin >> tt;
    while(tt--){
        ll n,s,k;
        cin >> n >> s >> k;
        vector <ll> closed(k);
        for(ll i = 0; i < k; i++) cin >> closed[i];
        sort(closed.begin(), closed.end());
        ll up = s, down = s;
        while(up <= n && bin(closed, 0, k-1, up) != -1){
            up++;
        }
        while(down >= 1 && bin(closed, 0, k-1, down) != -1){
            down--;
        }
        if(up == n+1) cout << s-down << endl;
        else if(down == 0) cout << up-s << endl;
        else cout << min(up-s, s-down) << endl;

    }

}