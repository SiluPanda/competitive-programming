#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    map <string, int> F;
    while(n--){
        string name;
        cin >> name;
        F[name]++;
    }
    int maxi = 0;
    for(auto it = F.begin(); it != F.end(); it++){
        maxi =  max(maxi, it->second);
    }
    vector <string> ans;
    for(auto it = F.begin(); it != F.end(); it++){
        if(it->second == maxi){
            ans.push_back(it->first);
        }
    }
    sort(ans.begin(), ans.end());
    for(auto x : ans){
        cout << x << endl;
    }
}