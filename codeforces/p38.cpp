#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long k){
    if(n&1 == 0){
        if(k <= n/2){
            return 2*k - 1;
        }
        else{
            return 2*(k-(n/2));
        }
    }
    else{
        if(k <= (n+1)/2){
            return 2*k - 1;
        }
        else{
            return 2*(k-(n+1)/2);
        }
    }
}

int main(){
    long long n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
}