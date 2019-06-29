#include <bits/stdc++.h>
using namespace std;


int simple_search(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return i;
		}

	}

	
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[61]; 
		int adup[61];
		for(int i = 0; i < 61; i++){
			a[i] = 0;
			adup[i] = 0;
		}

		for(int i = 0; i < n; i++){
			int num; cin>>num;
			a[num]++;
			adup[num]++;

		}

		sort(a, a+61, greater<int>());

		int i = 0;
		while(a[i] != 0){
			int ind = simple_search(adup, 61, a[i]);
			for(int t = 0; t < a[i]; t++){
				cout<<ind<<" ";
				
			}
			adup[ind] = -1;
			
			if(i == 60){
				break;
			}
			i++;
		}
		cout<<endl;









	}
}