#include <bits/stdc++.h>
using namespace std;

int method1(int a[], int n){
    //By converting 0s to -1 and calculating number of subarrays witth 0 sum
    for(int i = 0; i < n; i++){
        if(a[i] == 0) a[i] = -1;
    }
    int prefix[n+1];
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        prefix[i+1] = prefix[i]+a[i];
    }
    unordered_map <int, int> M;
    for(int i : prefix){
        M[i]++;
    }
    int ret = 0;
    for(auto i = M.begin(); i != M.end(); i++){
        ret += (i->second * (i->second-1))/2;
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << method1(a, n) << endl;
}