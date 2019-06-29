#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n, q;
	cin>>n>>q;
	deque <ll> dq_o;
	ll maxi = INT_MIN;
	for(ll i = 0; i < n; i++){
		ll num;
		cin>>num;
		maxi = max(maxi, num);
		dq_o.push_back(num);
	}
	ll size = dq_o.size();
	while(q--){
		deque <ll> dq;
		dq = dq_o;
		ll m;
		cin>>m;
		bool ok = 0;

		while(m > 1){
			
			
			if(dq.front() == maxi){
				for(ll i = 0; i < (m-1)%(size-1); i++){
					dq.pop_front();
				}
				cout<<maxi<<" "<<dq.front()<<endl;
				ok = 1;
				break;
			}
			else{
				ll a = dq.front();
				dq.pop_front();
				ll b = dq.front();
				cout<<a<<" "<<b<<endl;
				dq.push_front(max(a, b));
				dq.push_back(min(a, b));
			}
			m--;

		}
		if(!ok){
			ll a = dq.front();
			dq.pop_front();
			ll b = dq.front();
			cout<<a<<" "<<b<<endl;
		}

	}
}