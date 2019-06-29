#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isprime(ll n){
	if(n == 1) return false;
	else if(n == 2 || n == 3) return true;
	else{
		for(ll i = 5; i < sqrt(n); i += 6){
			if(n % i == 0 || n % (i+2) == 0) return false;
		}
	}

	return true;
}

int main(){
    
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n; ll ndup = n;
       	for(int i = 0; i < n; i++){
       		
       	}
    }
	
	return 0;
}