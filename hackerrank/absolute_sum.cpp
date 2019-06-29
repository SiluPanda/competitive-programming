#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll update_array_sum(int arr[], int size, int x){
	ll sum = 0;

	for(int i = 0; i < size; i++){
		arr[i] += x;
		sum += abs(arr[i]);
	}

	return sum;
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int q; cin>>q;
	while(q--){
		int num; cin>>num;
		cout<<update_array_sum(a, n, num)<<endl;
	}
}