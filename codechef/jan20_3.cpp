#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int c = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int up = i, down = i, right = j, left = j;
                while(up >= 0 && down < n && right < m
                && left >= 0 && a[up][j] == a[down][j] &&
                a[i][right] == a[i][left]){
                    left--;
                    right++;
                    up--;
                    down++;
                    c++;
                }
            }
        }
        cout << c << "\n";
    }



}