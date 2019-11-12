#include <bits/stdc++.h>
using namespace std;

vector <int> absolute(int n, int k){
    
    unordered_map <int, bool> F;
    bool visited[n+1];
    memset(visited, false, sizeof(visited));
    vector <int> ans;
    for(int i = 0; i < n; i++) ans.push_back(i+1);
    for(int i = 0; i < n-k; i++){
        if(visited[i] == false){
            swap(ans[i], ans[i+k]);
            visited[i] = true;
            visited[i+k] = true;
        }
    }
    for(int i = 0; i < ans.size(); i++){
        if(abs(ans[i]-i-1) != k) return {-1};
    }
    return ans;
    
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        vector <int> ans = absolute(n, k);
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}