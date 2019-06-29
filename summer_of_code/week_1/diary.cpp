//https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int;


int main(){
	int t; cin>>t;
	map <string, int> p;
	while(t--){
		string name;
		cin>>name;
		if(p.find(name) == p.end()){
			p[name] = 1;
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}

	}
}