#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll triplets(ll a[], ll na, ll b[], ll nb, ll c[], ll nc){
	ll ans = 0;
	sort(a, a+na);
	sort(b, b+nb);
	sort(c, c+nc);

	

	vector <ll> va, vb, vc;
	for(ll i = 0; i < na; i++){
		if(a[i] != a[i+1]) va.push_back(a[i]);
	}
	for(ll i = 0; i < nb; i++){
		if(b[i] != b[i+1]) vb.push_back(b[i]);
	}
	for(ll i = 0; i < nc; i++){
		if(c[i] != c[i+1]) vc.push_back(c[i]);
	}

	na = va.size();
	nb = vb.size();
	nc = vc.size();

	ll j = 0, i = 0, k = 0;

	while(j < nb){
		while(i < na && va[i] <= vb[j]){
			i++;
		}
		while(k < nc && vc[k] <= vb[j] ){
			k++;
		}

		ans += i*k;
		j++;
	}

	return ans;

}

int main(){
	ll na, nb, nc;
	cin>>na>>nb>>nc;
	ll a[na], b[nb], c[nc];
	for(ll i = 0; i < na; i++) cin>>a[i];
	for(ll i = 0; i < nb; i++) cin>>b[i];
	for(ll i = 0; i < nc; i++) cin>>c[i];

	cout<<triplets(a,na,b,nb,c,nc)<<endl;

}