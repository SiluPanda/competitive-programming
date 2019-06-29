#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;



int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n], d[n];
        for(int i = 0; i < n; i++){
        	cin>>a[i];
        }
        for(int i = 0; i < n; i++){
        	cin>>d[i];
        }
        vector <int> v;
        v.pb(d[0]);
        int c = 1;
        for(int i = 1; i < n; i++){
        	bool f = false;
        	for(int j = 0; j < v.size(); j++){
        		if(a[i] > v[j]){
        			v[j] = d[i];
        			f = true;
        			break;
        		}
        	}
        	if(!f){
        		v.pb(d[i]);
        		c++;
        	}
        }
       

        cout<<c<<endl;

    }
	
	return 0;
}