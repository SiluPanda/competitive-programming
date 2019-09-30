#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"


int near(int a[], int n){
    sort(a, a+n);
    int minDiff = INT_MAX;
    int p1 = 0, p2 = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int csum = a[i]+a[j];
            if(abs(csum) <= abs(minDiff)){
                minDiff = csum;
                p1 = a[i];
                p2 = a[j];
            }
        }
    }
    return p1+p2;
}

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout << near(a, n) << el;
    }
}

