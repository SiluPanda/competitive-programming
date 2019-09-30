#include <bits/stdc++.h>
using namespace std;

int num_paths(int starti, int startj, int n, int m){
    int a[n][m];
    for(int i = 0; i < n; i++){
        a[i][m-1] = 1;
    }
    for(int i = 0; i < m; i++){
        a[n-1][i] = 1;
    }
    for(int i = n-2; i >= 0; i--){
        for(int j = m-2; j >= 0; j--){
            a[i][j] = a[i+1][j]+a[i][j+1];
        }
    }
    return a[starti][startj];
}

int main(){
    int tt; cin>>tt;
    

    while(tt--){
        int n, m;
        cin>>n>>m;
        cout << num_paths(0, 0, n, m) << endl;
    }
}