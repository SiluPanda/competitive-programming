#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isprime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i < sqrt(n)+1; i += 6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

int main(){
    fastio
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 2; i < n-3; i++){
            if(isprime(i) && isprime(n-i)){
                cout << i << " " << n-i << el;
                break;
            }
        }

    }
	
	return 0;
}