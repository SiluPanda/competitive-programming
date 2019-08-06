#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define el "\n"

int main(){
    int n, q;
    cin>>n>>q;
    map <int , bool> mp;
    while(q--){
        int type, val;
        cin>>type>>val;
        if(type == 1){
            mp[val] = 1;
        }
        else{
            auto it = mp.lower_bound(val);
            if(it->first != mp.size() && it != mp.end()){
                cout << (*it).first << el;
            }
            else{
                cout << -1 << el;
            }
        }
    }
}