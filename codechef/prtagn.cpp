#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string to_bin(ll num){
    string ans = bitset<17>(num).to_string();
    return ans;
}

ll iseven(string s){
    ll even = 0;
    for(ll i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            even++;
        }
    }
    if(even%2 == 0){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        map <ll, bool> mp;
        map <ll, bool>::iterator itr;
        ll Q;
        cin>>Q;
        ll even = 0, odd = 0;
        while(Q--){
            
            ll x;
            cin>>x;
            
            if(mp.find(x) == mp.end()){
                mp[x] = 1;
                if(iseven(to_bin(x))){
                    even++;
                }
                else{
                    odd++;
                }
                //cout << "chk1" << endl;
                vector <ll> new_nums;
                for(itr = mp.begin(); itr != mp.end(); itr++){
                    if(itr->first != x){
                       ll num = itr->first^x;
                       if(iseven(to_bin(num))){
                           even++;
                       }
                       else{
                           odd++;
                       }
                       //cout << "chk2" << endl;
                       new_nums.push_back(num);
                    }
                }
                //cout << "chk3" << endl;
                for(ll i = 0; i < new_nums.size(); i++){
                    mp[new_nums[i]] = 1;
                }
                //cout << "chk4" << endl;
                

            }
            cout << even << " " << odd << endl;
            
            


        }

    }
}