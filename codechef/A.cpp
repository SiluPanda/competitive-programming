#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            mini = min(num, mini);
        }
        cout << mini << endl;
    }
}