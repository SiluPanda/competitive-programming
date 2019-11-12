#include <bits/stdc++.h>
using namespace std;

int fun(int n, int m){
    int a[n+1];
    memset(a, 0, sizeof(a));
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i >= j) a[i]+=a[i-j];
        }
    }
    for(int i = 0; i <= n; i++) cout << a[i] <<" ";
    cout << endl;
    return a[n];
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << fun(n, m) << endl;
}