#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int q; cin>>q;
	vector <vector<int> > v;
	vector <int> temp;
	for(int i = 0; i < n; i++){
		v.push_back(temp);
	}
	int ln = 0;
	while(q--){
		int chk, x, y;
		cin>>chk>>x>>y;
		int index = (x^ln)%n;
		if(chk == 1){
			
			v[index].push_back(y);
		}
		else{
			ln = v[index][y % (v[index].size())];
			cout<<ln<<endl;
		}
	}
}