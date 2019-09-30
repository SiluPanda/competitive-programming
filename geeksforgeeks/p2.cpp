#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i+=6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}


vector <int>  SieveOfEratosthenes(int n){
    vector <int> prime(n+1, 1);
    prime[0] = 0;
    prime[1] = 0;
    for(int p = 2; p*p <= n; p += 1){
        if(prime[p]){
            for(int i = p*p; i <=n; i += p){
                
                
                prime[i] = 0;
            }
        }
    }
    return prime;
    
}

int main(){
    
    int tt; cin>>tt;
    vector <int> prime = SieveOfEratosthenes(1000000);
    while(tt--){
        int n;
        cin>>n;
        bool found = false;
        
        //for(int i = 0; i < 20; i++) cout << prime[i] << " ";
        
        for(int i = 2; i < n; i++){
            if(prime[i] && prime[n-i]){
                cout << i << " " << n-i << endl;
                found = true;
                break;
            }
        }

        if(!found) cout << -1 << endl;
    }

}
