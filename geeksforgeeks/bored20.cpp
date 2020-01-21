#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

//number of substrings with 0,1,2 same

int numberSub(string s){
    map < pair <int, int>, int> F;
    int ret = 0;
    int curr[3] = {0};
    F[make_pair(0,0)] = 1;
    for(int i = 0; i < s.length(); i++){
        curr[s[i]-'0']++;
        pair <int, int> curr_diff;
        curr_diff.first = curr[0]-curr[1];
        curr_diff.second = curr[0]-curr[2];
        ret+=(F[curr_diff]++);
        
    }
    return ret;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        cout << numberSub(s) << el;
    }
}