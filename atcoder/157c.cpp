#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector <pair <int, int>> req(m);
    for(int i = 0; i < m; i++) cin >> req[i].first >> req[i].second;
    //cout << "hello1" << endl;
    int i = pow(10, n-1);
    if(i == 1) i = 0;
    for(; i < pow(10, n); i++){
        string num = to_string(i);
        bool found = true;
        for(auto x : req){
            if(num[x.first-1]-'0' != x.second){
                found = false;
                break;
            }
        }
        if(found){
            cout << i << endl;
            return;
        }
    }
    //cout << "hello2" << endl;
    cout << -1 << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}