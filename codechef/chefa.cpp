#include <bits/stdc++.h>
using namespace std;

long fun(long a[], long n){
	sort(a, a+n, greater <int>());
	long ans = 0;
	for(long i = 0; i < n; i+= 2){
		//cout<<"element is: "<<a[i]<<endl;
		ans += a[i];
	}
	return ans;
}

int main(){
	int t; cin>>t;
	while(t--){
		long n; cin>>n;
		long a[n];
		for(long i = 0; i < n; i++){
			cin>>a[i];
		}
		cout<<fun(a, n)<<endl;
	}
}