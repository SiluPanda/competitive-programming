#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll pre[100] = {0};

void precompute(){
    pre[0] = 0;
    pre[1] = 1;
    for(ll i = 2; i <= 100; i++){
        pre[i] = pre[i-1]+pre[i-2];
    }
}

bool search(ll a[], ll low, ll high, ll target){
    for(ll i = low; i <= high; i++){
        if(a[i] == target) return 1;
    }
    return 0;
}

int main(){
    precompute();
    ll tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        if(binary_search(pre,0,100,n)) cout << "IsFibo";
        else cout << "IsNotFibo";
        cout << endl;

    }
}