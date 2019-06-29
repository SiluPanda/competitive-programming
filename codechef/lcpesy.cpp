#include <bits/stdc++.h>
using namespace std;

int fun(string s1, string s2){
	map <char, int> mp1, mp2;
	for(int i = 0; i < s1.length(); i++){
		if(mp1.find(s1[i]) == mp1.end()){
			mp1[s1[i]] = 1;
		}
		else{
			mp1[s1[i]]++;
		}
	}

	for(int i = 0; i < s2.length(); i++){
		if(mp2.find(s2[i]) == mp2.end()){
			mp2[s2[i]] = 1;
		}
		else{
			mp2[s2[i]]++;
		}
	}

	int ans = 0;
	map <char, int>::iterator itr;
	for(itr = mp1.begin(); itr != mp1.end(); itr++){
		if(mp2.find(itr->first) != mp2.end()){
			ans += min(itr->second, mp2[itr->first]);
		}
	}

	return ans;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout << fun(s1, s2) << endl;
	}
}