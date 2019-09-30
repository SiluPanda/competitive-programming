#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"



//space optimized memoization
ll fib(ll n){
	double phi = (1 + sqrt(5)) / 2; 
  	return round(pow(phi, n) / sqrt(5)); 
}

int main(){
	fastio;
	int tc;
	cin>>tc;
	
	while(tc--){
		ll n;
		cin>>n;
		n/=2;
		cout << fib(n) % 10 << el;
	}
}