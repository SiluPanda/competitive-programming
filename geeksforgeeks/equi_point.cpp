#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int equi(int a[], int n){
    int sum = 0;
    if(n == 1) return 1;
    for(int i = 0; i < n; i++) sum += a[i];
    int csum = 0;
    bool found = 0;
    for(int i = 1; i < n-1; i++){
        csum += a[i-1];
        if((sum - csum - a[i]) == csum){
            found = 1;
            return i+1;
        }
    }
    if(!found) return -1;
    
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        cout << equi(a, n) << el;
    }
}