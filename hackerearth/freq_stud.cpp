#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define el "\n"

int main(){
    fastio;
    int n;
    cin>>n;
    map <string, int> mp;
    while(n--){
        string name;
        cin>>name;
        mp[name]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++) cout << itr->first << " " << itr->second << el;
}