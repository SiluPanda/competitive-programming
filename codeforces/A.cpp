#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll n){
	/*if(n == 1){
		return 1;
	}
	ll ans = pow(((2 * n) - 3), 2) + 4;
	return ans;*/
	return pow(n, 2) + pow(n-1, 2);
}

int main(){
	ll n;
	cin>>n;
	cout<<fun(n)<<endl;
}