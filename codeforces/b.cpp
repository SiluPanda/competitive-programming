#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n;
	cin>>n;
	ll a[n];
	ll max_ele = INT_MIN, min_ele = INT_MAX;
	ll pos = 0, neg = 0, zer = 0;
	for(ll i = 0; i < n; i++){
		cin>>a[i];
		if(a[i] > 0){
			pos++;
		}
		else if(a[i] < 0){
			neg++;
		}
		else{
			zer++;
		}
		max_ele = max(max_ele, a[i]);
		min_ele = min(min_ele, a[i]);
	}
	//sort(a, a+n);
	if(pos%2 == 0 && neg%2 == 0){
		if(zer%2 == 0){
			for(int i = 0; i < n; i++){
				if(a[i] >= 0){
					cout<<a[i]*(-1) -1 <<" ";
				}
				else{
					cout<<a[i]<<" ";
				}

			}
			cout<<endl;
		}
		else{
			bool ok = 0;
			for(int i = 0; i < n;i++){
				if(a[i] == 0){
					cout<<-1<<" ";
				}
				else if(a[i] == max_ele || a[i] < 0){
					cout<<a[i]<<" ";
				}
				else if(a[i] > 0){
					cout<<(-1)*a[i]-1<<" ";
				}
				cout<<endl;
			}
		}
	}

	else if(pos%2 == 0 && neg%2 != 0){
		if(zer%2 == 0){
			bool ok = abs(max_ele) > abs(min_ele)
			for(ll i = 0; i < n; i++){
				if(a[i] == 0){
					cout<<-1<<" ";
				}

				else if (a[i] < 0){
						cout<<a[i]<<" ";
				}
				else if(a[i] > 0){
					cout<<(-1)*a[i]-1<<" ";
				}
				cout<<endl;
			}
		}
		else{
			if(a[i]  == 0){
				cout<<-1<<" ";
			}
			else if(a[i] > 0){
				cout<<(-1)*a[i]-1<<" ";
			}
			else{
				cout<<a[i]<<" ";
			}
		}
	}

	else if(pos%2 != 0 && neg%2 == 0){
		if(zer%2 == 0){

		}
	}

}