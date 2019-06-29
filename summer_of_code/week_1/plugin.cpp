//https://codeforces.com/contest/81/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


string plugin(string s){
	
	int itr = 0;
	int len = s.length();
	while(itr < len){
		if(s[itr] == s[itr+1]){
			s.erase(s.begin() + itr, s.begin() + itr+2);
			itr--;

		}
		else{
			itr++;
		}
	}
	return s;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	cout<<plugin(s)<<endl;
}