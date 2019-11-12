#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    ll q;
    cin>>q;
    unordered_map <ll, ll> freq, pos;
    while(q--){
        ll ac, val;
        cin >> ac >> val;
        if(ac == 1){
            if(pos[freq[val]] > 0){
                pos[freq[val]]--;
            }
            freq[val]++;
            pos[freq[val]]++;
        }
        else if(ac == 2){
            if(freq[val] > 0){
                pos[freq[val]]--;
                freq[val]--;
                pos[freq[val]]++;
            }
        }
        else{
            if(pos[val] > 0){
                cout << 1 << el;
            }
            else cout << 0 << el;
        }
    }
}