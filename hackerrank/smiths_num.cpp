#include <bits/stdc++.h>
using namespace std;

vector <long> getsum(long n){
    vector <long> ans;
    while(n%2 == 0){
        //cout << 2 << endl;
        ans.push_back(2);
        n>>=1;
    }
    for(long i = 3; i <= sqrt(n); i+=2){
        while(n%i == 0){
            ans.push_back(i);
            //cout << i << endl;

            //cout << ans << endl;
            n/=i;
        }
    }
    if(n > 2) {
        ans.push_back(n);
        //cout << n << endl;
    }
    //cout << ans << endl;
    return ans;
}

long digsum(long n){
    long ans  = 0;
    while(n > 0){
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
bool isprime(long n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(long i = 5; i <= sqrt(n); i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}
bool isit(long n){
    if(isprime(n)) return 0;
    long p = 0;
    vector <long> v = getsum(n);
    for(long i = 0; i < v.size(); i++){
        //cout << v[i] << endl;
        p += digsum(v[i]);
    }
    return p == digsum(n);
} 

int main(){
    long n;
    cin >> n;
    
    
    cout << isit(n) << endl;
    
    
}