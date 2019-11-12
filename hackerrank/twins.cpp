#include <bits/stdc++.h>
using namespace std;

bool isprime[1000000001];
void sieve(){
    memset(isprime, 1, sizeof(isprime));
    long n = 1000000001;
    isprime[1] = 0;
    for(long i = 2; i <= sqrt(n); i++){
        if(isprime[i]){
            for(long j = i*i; j <= n; j+=i){
                isprime[j] = 0;
            }
        }
    }
}

bool prime(long n){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(n%2 == 0 || n%3 == 0) return 0;
    for(long i = 5; i <= sqrt(n); i+=6){
        if(n%i == 0 || n%(i+2) == 0) return 0;
    }
    return 1;
}

int main(){
    //sieve();
    long n, m;
    cin >> n >> m;
    long ans = 0;
    for(long i = n; i <= m; i++){
        if(prime(i) && prime(i+2)){
            ans++;
            i+=1;
        }
    }
    cout << ans << endl;
}