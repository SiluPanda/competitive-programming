#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int solve(string s, int n){
    unordered_map <char, vector <int> > F;
    for(int i = 0; i < n; i++){
        F[s[i]].push_back(i);
    }
    int ret = 0;
    for(auto it = F.begin(); it != F.end(); it++){
        vector <int> curr = it->second;
        if(curr.size() > 1){
            for(int i = 0; i < curr.size()-1; i++){
                ret = max(ret, n-(curr[i+1]-curr[i]));
            }
        }
    }
    return ret;
    
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        string s;
        cin >> s;
        cout << solve(s, n) << endl;
    }
}