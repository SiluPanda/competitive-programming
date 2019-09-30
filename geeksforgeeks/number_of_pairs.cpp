#include <bits/stdc++.h>
using namespace std;

long count(long a[], long n, long b[], long m){
    long ans = 0;
    long num1a = 0, num1b = 0;
    for(int i = 0; i < n; i++) if(a[i] == 1) num1a++;
    for(int i = 0; i < m; i++) if(b[i] == 1) num1b++;
    if(num1b) ans+=(n-num1a);
    
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long n, m;
        cin>>n>>m;
        long a[n], b[m];
        for(long i = 0; i < n; i++) cin>>a[i];
        for(long i = 0; i < m; i++) cin>>b[i];
        cout << count(a,n,b,m) << endl;
    }
}