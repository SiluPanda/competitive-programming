#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define max_size 100000

int a[max_size] = {0};
int main(){
	ll q; cin>>q;
	while(q--){
		int p, num;
		cin>>p>>num;
		if(p == 1){
			a[num]++;
		}
		else if(p == 2){
			if(a[num] > 0){
				a[num]--;
			}
		}
		else{
			bool f = false;
			for(ll i = 0; i < max_size; i++ ){
				if(a[i] == num){
					cout<<1<<endl;
					f = true;
					break;
				}
			}
			if(!f){
				cout<<0<<endl;
			}
		}

	}
}