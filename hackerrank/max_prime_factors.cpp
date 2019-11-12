#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    } 
    for(long i = 5; i < sqrt(n); i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int Q;
    cin>>Q;
    while(Q--){
        long n;
        cin>>n;
        int ans = 0;
        long prod = 1;
        long curr = 2;
        while(prod*curr <= n){
            if(isPrime(curr)){
                prod*=curr;
                ans++;
            }
            curr++;
        }      
        cout << ans << endl;
    }
}
