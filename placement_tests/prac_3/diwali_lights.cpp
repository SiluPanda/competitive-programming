#include <bits/stdc++.h>
using namespace std;
#define ll long long int

long fun(n){
    long ans = 1;
    for(int i = 1; i <= n; i++){
        ans = (ans * 2) % 100000;
    }
    return (ans - 1) % 100000;
}

int main(){
    int n; cin<<n;
    cout << fun(n) << endl;
}