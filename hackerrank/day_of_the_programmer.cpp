#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int y;
	cin>>y;
	int d = 0;
	if(y == 1918){
		d = 26;
	}
	else if(y <= 1917){
		if(y % 4 == 0){
			d = 12;
		}
		else{
			d = 13;
		}
	}
	else{
		if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
			d = 12;
		}
		else{
			d = 13;
		}
	}
	cout<<d<<"."<<"09"<<"."<<y<<endl;

}