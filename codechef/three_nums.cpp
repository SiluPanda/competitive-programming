#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int tt;
	cin>>tt;
	while(tt--){
		ll a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a, a+3);
		ll ans = (a[0] * (a[1]-1))%1000000007;
		ans = (ans * (a[2]-2)) % 1000000007;
		cout << ans << endl;

	}
}