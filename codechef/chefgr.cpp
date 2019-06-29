#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long int

vector <vector <bool>> clear(vector <vector <char>> v, int n, int m){
	vector <vector <bool>> ans;
	for(int i = 0; i < n; i++){
		vector <bool> row;
		for(int i = 0; i < n;i++){
			row.push_back(false);
		}
		ans.push_back(row);
	}
	if(v[n-1][m-1] == '.'){
		ans[n-1][m-1] = true;
	}
	for(int i = m-2; i >= 0; i--){
		if(v[n-1][i] != '#' && ans[n-1][i+1] ){
			ans[n-1][i] = true;
		}
		else{
			ans[n-1][i] = false;
		}
	}
	for(int i = n-2; i >= 0; i--){
		if(v[i][m-1] != '#' && ans[i+1][m-1]){
			ans[i][m-1] = true;
		}
		else{
			ans[i][m-1] = false;
		}
	}

	for(int i = n-2; i >= 0; i--){
		for(int j = m-2; j >= 0; j--){
			if(ans[i+1][j] && ans[i][j+1]){
				ans[i][j] = true;
			}
			else{
				ans[i][j] = false;
			}
		}
	}

	return ans;
}


int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <vector <char>> inp;
		for(int i = 0; i < n; i++){
			string s; cin>>s;
			vector <char> row;
			for(int i = 0; i < n; i++){
				row.push_back(s[i]);
			}
			inp.push_back(row);
		}
		//cout << "got input" << endl;
		vector <vector <bool>> ans;
		ans = clear(inp, n, n);
		int to_return = 0;
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n ; j++ ){
				if(ans[i][j]) to_return++;
			}
		}

		cout<< to_return << endl;
	}
}