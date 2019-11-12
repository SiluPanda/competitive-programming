#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    
    int pre[251] = {0};
    pre[0] = 1;
    for(int i = 1; i <= 250; i++){
        for(int j = 0; j < m; j++){
            int idx = i-a[j];
            if(idx >= 0) pre[i] += pre[idx];
        }
    }
    for(int i = 0; i <= n; i++) cout << pre[i] << endl;

}