//https://codeforces.com/contest/821/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){
	ll t; cin>>t;
	t  = t + t;
	stack <ll> inp;
	ll check_pt = 1;
	ll ans = 0;
	while(t--){
		string cmd;
		cin>>cmd;
		
		if(cmd == "add"){
			
			ll num; cin>>num;
			inp.push(num);

		}
		else{
			if(inp.empty() == false){
				if(inp.top() == check_pt){
					inp.pop();

				}
				else{
					ans++;
					while(!inp.empty()) {
						inp.pop();
					}
				}
				
			}
			check_pt++;


		}


	}
	cout<<ans<<endl;
}