#include <bits/stdc++.h>
using namespace std;
#define mod 10000000007

long pre[37];

void populate(){
    pre[1] = 1;
    pre[2] = 2;
    pre[3] = 4;
    for(int i = 4; i < 37; i++){
        pre[i] = ((pre[i-1]+pre[i-2])+ pre[i-3])%mod;
    }
}

int main(){
    populate();
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        cout << pre[n] << endl;
    }
}