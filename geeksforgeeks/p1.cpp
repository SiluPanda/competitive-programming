#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int arr[n+1] = {0};
        for(int i = 0; i < n; i++){
            int num; cin>>num;
            arr[num]++;
        }
        
        int a = 0, b = 0;
        for(int i = 1; i <= n; i++){ 
            if(arr[i] == 0) a = i;
            if(arr[i] == 2) b = i;
            
        }
        
        cout << b << " " << a << endl;
    }
}