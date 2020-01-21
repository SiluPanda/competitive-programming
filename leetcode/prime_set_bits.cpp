#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int setb(int n){
    int c = 0;
    while(n > 0){
        c += (n%2);
        n/=2;
    }
    return c;
}

int isprime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i*i <= n; i+=6){
        if(n%i == 0 || (n%(i+2) == 0)) return false;
    }
    return true;
}

int count(int L, int R){
    int ret = 0;
    for(int i = L; i <= R; i++){
        ret += isprime(setb(i));
    }
    return ret;
}

int main(){
    int L, R;
    cin >> L >> R;
    cout << count(L, R) << endl;
}