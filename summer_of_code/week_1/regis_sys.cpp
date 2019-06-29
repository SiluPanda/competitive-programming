//https://codeforces.com/contest/4/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	int t;
	cin>>t;
	map <string, int> regis;
	while(t--){

		string name;
		cin>>name;
		if(regis.find(name) == regis.end()){
			cout<<"OK"<<endl;
			regis[name] = 1;
		}
		else{
			cout<<name + to_string(regis[name])<<endl;
			regis[name]++;
		}

	}
}