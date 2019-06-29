#include <bits/stdc++.h>
using namespace std;

bool isana(string s1, string s2){
	if(s1.length() != s2.length()){
		return false;
	}
	map <char, int> mp1;
	map <char, int> mp2;

	for(int i = 0; i < s1.length(); i++){
		if(mp1.find(s1[i]) != mp1.end()){
			mp1[s1[i]]++;
		}
		else{
			mp1[s1[i]] = 1;
		}
	}
	for(int i = 0; i < s2.length(); i++){
		if(mp2.find(s2[i]) != mp2.end()){
			mp2[s2[i]]++;
		}
		else{
			mp2[s2[i]] = 1;
		}
	}
	if(mp1.size() != mp2.size()){
		return false;
	}

	map <char, int>::iterator itr;
	for(itr = mp1.begin(); itr != mp1.end(); itr++){
		char key = itr->first;
		if(itr->second != mp2[key]){
			return false;
		}
	}

	return true;

}


int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector <string> v;
		for(int i = 0; i < s.length(); i++){
			string tmp = "";
			for(int j = 1; j < s.length()-i+1; j++){
				tmp =  s.substr(i, j);
				v.push_back(tmp);
			}
			
		}
		
		int ans = 0;
		//set <pair <string, string>> st;
		for(int i = 0; i < v.size()-1; i++){
			for(int j = i+1; j < v.size(); j++){
				if(isana(v[i], v[j])){
					ans++;
				}
			}
		}

		cout<<ans<<endl;

	}
}