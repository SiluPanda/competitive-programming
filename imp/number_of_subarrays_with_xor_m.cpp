#include <bits/stdc++.h>
using namespace std;

int num_arrays(int a[], int n, int m){
    int ret = 0;
    int prefix[n+1];
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        prefix[i+1] = prefix[i]^a[i];
    }
    unordered_map <int, int> M;
    for(int i = 0; i < n+1; i++){
        int tmp = m^prefix[i];
        ret += M[tmp];
        M[prefix[i]]++;
    }
    return ret;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << num_arrays(a, n, m) << endl;
}