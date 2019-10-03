#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        unordered_map <char, int> freq;
        for(int i = 0; i < s.length(); i++) freq[s[i]]++;
        int size = freq.size();
        int a[size];
        int idx = 0;
        int ma = INT_MIN, mi = INT_MAX;
        map <int, int> mp;
        for(auto i = freq.begin(); i != freq.end(); i++){
            a[idx] = i->second;
            ma = max(ma, a[idx]);
            mi = min(mi, a[idx]);
            mp[a[idx]]++;
            idx++;
            
        }
        if(mp.size() == 1){
            cout << 1;
        }
        else if(mp.size() == 2){
            map <int, int>::iterator it;
            it = mp.begin();
            if(it->first == 1 && it->second == 1){
                cout << 1;
            }
            else{
                it++;
                if(it->first-mp.begin()->first == 1 && it->second == 1){
                    cout << 1;
                }
                else cout << 0;
            }
            
        }
        else cout << 0;
        cout << endl;
    }
}