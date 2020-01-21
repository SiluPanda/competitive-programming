#include <bits/stdc++.h>
using namespace std;

int main(){
    int levels;
    cin >> levels;
    vector <bool> all(levels, false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        all[num-1] = true;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        all[num-1] = true;
    }
    bool flag = false;
    for(auto x : all){
        if(!x) {
            cout << "Oh, my keyboard!";
            flag = true;
            break;
        }
    }
    if(!flag) cout << "I become the guy.";
    cout << endl;

    
}