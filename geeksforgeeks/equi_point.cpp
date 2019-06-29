#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int eq(int a[], int n){
    
    if(n == 1){
        return 1;
    }
    int ts = 0;
    for(int i = 0; i < n; i++){
        ts += a[i];
    }
    
    int cs = 0;
    bool f = false;
    for(int i = 0; i < n-2; i++){
        cs += a[i];
        if(cs == (ts - cs - a[i+1])){
            f = true;
            return i+2;
        }
    }
    if(!f) return -1;
    
}
int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        cout<<eq(a, n)<<endl;
        
    }
	
	return 0;
}