#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s, p;
	cin>>s>>p;
	int size = n;
	bool f = false;
	int start = 0;
	while(!f){
		if(s.substr(start, size) == p.substr(0, size)){
			f = true;
			//cout << s.substr(start, size) << endl;
			cout << s.length()-size << endl;
			break;
		}
		size--;
		start++;
	}
}