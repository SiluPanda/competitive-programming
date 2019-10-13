#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define mod 100000

LL fast(LL base, LL exp){
    if(exp == 1){
        return base;
    }
    else{
        LL temp = pow(fast(base, exp/2), 2);
        if(exp%2 == 0){
            return temp%mod;
        }
        else{
            return (base*temp)%mod;
        }
    }
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        LL n;
        cin>>n;
        cout << fast(2, n) - 1 << endl;
    }
}