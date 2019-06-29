#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue <int> p;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int k; cin>>k;

        for(int i = 0; i < k; i++){
            
            p.push(a[i]);

        }

        for(int i = k; i < n; i++){
            
            if(a[i] < p.top()){
                p.pop();
                p.push(a[i]);
            }
        }

        
        cout<<p.top()<<endl;
    }
	
	return 0;
}