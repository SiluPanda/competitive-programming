#include <bits/stdc++.h>
using namespace std;

int fun(int a[], int n, int k){
    if(k > n) return -1;
    priority_queue <int> p;
    for(int i = 0; i < k; i++){
        p.push(a[i]);
    }
    for(int i = k; i < n;i++){
        if(p.top() > a[i]){
            p.pop();
            p.push(a[i]);

        }
    }
    return p.top();
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int k; cin>>k;
        cout << fun(a, n, k) << endl;
    }
}