#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll div(string b){
	ll rem = 0;
	for(ll i = 0; i < b.length(); i++){
		if(b[i] == '1'){
			if(i % 2 == 0){
				rem += 1;
			}
			else{
				rem += 2;
			}
		}
	}
	if(rem % 3 == 0){
		return 1;
	}
	else return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string b;
		cin>>b;
		cout<<div(b)<<endl;
	}
}