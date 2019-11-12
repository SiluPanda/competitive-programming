#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int q;
    cin>>q;
    stack <ll> st;
    map <ll, ll> mp;
    while(q--){
        ll ac;
        cin >> ac;
        if(ac == 1){
            ll val;
            cin >> val;
            st.push(val);
            mp[val]++;
        }
        else if(ac == 2){
            ll val = st.top();
            mp[val]--;
            st.pop();
        }
        else{
            for(auto i = mp.rbegin(); i != mp.rend(); i++){
                if(i->second != 0){
                    cout << i->first << endl;
                    break;
                }
            }
        }

    }
}