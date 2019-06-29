#include <bits/stdc++.h>
using namespace std;
#define ll long long int

//follows kadane's algorithm
double max_sum_substr(ll a[], ll n){
	double max_so_far = INT_MIN;
	double max_ending_here = 0;
	for(ll i = 0; i < n; i++){
		max_ending_here += a[i];
		if(max_ending_here > max_so_far) max_so_far = max_ending_here;
		if(max_ending_here < 0) max_ending_here = 0;
	}

	return max_so_far;
}


int main(){
	ll n;
	double x;
	cin>>n>>x;
	ll a[n];
	double sum = 0;
	for(ll i = 0; i < n; i++) {
		cin>>a[i];
		sum += a[i];
	}

	ll max_sum = max_sum_substr(a, n);
	cout<<(sum - max_sum + float(max_sum/x))<<endl;
	
}
