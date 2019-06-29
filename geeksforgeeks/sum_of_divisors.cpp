#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isprime(ll n){
	if(n == 1){
		return false;
	}
	else if(n == 2 || n == 3){
		return true;
	}
	else{
		for(ll i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
	}

	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll sum = 0;
		for(ll i = 2; i <= n; i++){
			if(isprime(i) && n % i == 0){
				sum += i;
			}
		}

		cout<<sum<<endl;
	}
}