#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define el "\n"

int main(){
    fastio
    int n; cin>>n;
    map < pair <int, int>, int > mp;
    while(n--){
        pair <int, int> p;
        cin>>p.first>>p.second;
        mp[p]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        cout << itr->first.first << " " << itr->first.second << " " << itr->second << el;
    }
}