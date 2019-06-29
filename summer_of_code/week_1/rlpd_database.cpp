//https://www.spoj.com/problems/RPLD/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int test; cin>>test;
	for(int tn = 0; tn < test; tn++){
		int n, r;
		cin>>n>>r;
		map <int, set <int>> db;
		bool f = true;
		while(r--){
			int id, cid;
			cin>>id>>cid;
			if(db.find(id) == db.end()){
				db[id].insert(cid);
			}
			else{
				if(db[id].find(cid) != db[id].end()){
					f = false;

				}
				else{
					db[id].insert(cid);
				}
			}
		}
		if(f) cout<<"Scenario "<<"#"<<tn+1<<": "<<"possible"<<endl;
		else cout<<"Scenario "<<"#"<<tn+1<<": "<<"impossible"<<endl;
	}
	
}