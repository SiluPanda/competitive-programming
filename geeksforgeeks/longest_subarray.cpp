#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int max_sub(int a[], int n){
    int i = 0, j = n-1;
    int max_len = 0;
    for(int i = 0; i < n; i++){
        int j = n-1;
        while(a[j]< a[i]){
            j--;
        }

        if((j-i) > max_len) max_len = j-i;
        else return max_len;
    }
}



int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[n];
        cout<<max_sub(a, n)<<endl;



        
        
    }
	
	return 0;
}